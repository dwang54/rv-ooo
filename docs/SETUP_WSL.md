# WSL2 + Ubuntu setup for Tomasulo-RV

Target: a working Linux toolchain on Windows, with Vivado available natively on
the Windows side. Budget about 90 minutes, most of which is unattended
downloading and compiling.

Verify as you go — each step has a check. If a check fails, fix it before
continuing; every later step assumes the earlier ones worked.

---

## Step 0 — Prerequisites

You need Windows 10 version 2004+ or Windows 11, and hardware virtualization
enabled in BIOS/UEFI.

Open **PowerShell** (normal, not admin) and run:

```powershell
winver
systeminfo | Select-String "Hyper-V|Virtualization"
```

You want to see virtualization enabled. If it says "A hypervisor has been
detected," you're fine — that means it's already on. If it explicitly reports
virtualization *not* enabled in firmware, reboot into BIOS and turn on
Intel VT-x or AMD-V. This is the one step that requires a reboot into firmware,
so get it out of the way first.

---

## Step 1 — Install WSL2 and Ubuntu 24.04

Open PowerShell **as Administrator**:

```powershell
wsl --install -d Ubuntu-24.04
```

This enables the WSL and Virtual Machine Platform features, installs the WSL2
kernel, and pulls Ubuntu 24.04. **Reboot when prompted.**

Use 24.04, not 26.04. 26.04 LTS is only a few months old and still has package
churn; 24.04 has the settled Verilator and build-tooling packages this project
depends on. You can upgrade later if you ever have a reason to.

After reboot, Ubuntu launches and asks for a UNIX username and password. The
username doesn't need to match your Windows one. **The password is invisible as
you type** — that's normal, not a broken keyboard. You'll need it for `sudo`.

**Check:**

```powershell
wsl --list --verbose
```

Expect `Ubuntu-24.04`, `Running`, and **VERSION 2**. If it says VERSION 1, fix
it now — WSL1 will cause strange failures later:

```powershell
wsl --set-version Ubuntu-24.04 2
wsl --set-default-version 2
```

---

## Step 2 — Cap WSL's memory before it becomes a problem

WSL2 will claim RAM aggressively and is slow to release it. Verilator builds
are memory-hungry, and left unbounded, WSL will push Windows into swapping
mid-regression. Set the limits now rather than diagnosing mystery slowdowns in
week three.

In PowerShell:

```powershell
notepad "$env:USERPROFILE\.wslconfig"
```

Paste this, adjusting `memory` to about half your system RAM:

```ini
[wsl2]
memory=8GB
processors=4
swap=8GB
localhostForwarding=true

[experimental]
autoMemoryReclaim=gradual
sparseVhd=true
```

`sparseVhd` matters more than it sounds: without it, the WSL virtual disk grows
as you use it and never shrinks, even after you delete files.

Apply it:

```powershell
wsl --shutdown
```

Wait ~10 seconds, then reopen Ubuntu.

**Check** (inside Ubuntu):

```bash
free -h
```

Total should reflect your configured limit.

---

## Step 3 — Update Ubuntu and install base packages

Inside the Ubuntu terminal:

```bash
sudo apt update && sudo apt full-upgrade -y
sudo apt install -y build-essential git curl wget \
  python3 python3-pip python3-venv \
  verilator iverilog gtkwave \
  autoconf automake autotools-dev libmpc-dev libmpfr-dev libgmp-dev \
  gawk bison flex texinfo gperf libtool patchutils bc zlib1g-dev \
  libexpat-dev device-tree-compiler ninja-build cmake pkg-config
```

**Check:**

```bash
verilator --version && git --version && python3 --version
```

Verilator should report 5.x. If you get 4.x, this project's SystemVerilog will
mostly work but `--binary` won't; upgrade via the Verilator source build if so.

---

## Step 4 — Windows Defender exclusions

Defender scans inside the WSL virtual disk, and it measurably slows builds.
In **PowerShell as Administrator**:

```powershell
Add-MpPreference -ExclusionPath "$env:LOCALAPPDATA\Packages\CanonicalGroupLimited.Ubuntu24.04LTS_79rhkp1fndgsc"
Add-MpPreference -ExclusionProcess "vmmem.exe"
Add-MpPreference -ExclusionProcess "wsl.exe"
Add-MpPreference -ExclusionProcess "wslservice.exe"
```

If the first path errors, find the right one with:

```powershell
Get-ChildItem "$env:LOCALAPPDATA\Packages" | Where-Object Name -like "*Ubuntu*"
```

---

## Step 5 — Git configuration (do this before cloning anything)

The single most common WSL papercut is CRLF line endings sneaking in from a
Windows editor, producing `bad interpreter: /bin/bash^M` — an error message
that tells you nothing about its actual cause.

```bash
git config --global core.autocrlf input
git config --global user.name  "Your Name"
git config --global user.email "you@example.com"
git config --global init.defaultBranch main
```

The repo also ships a `.gitattributes` pinning `.sv`, `.S`, and `.py` to LF, so
this is belt and braces. Both are worth having.

---

## Step 6 — Put the repo in the Linux filesystem

**This is the step people get wrong, and it costs the most.**

Cross-filesystem I/O between WSL2 and Windows is roughly an order of magnitude
slower. A Verilator rebuild touches thousands of files, so a repo on `/mnt/c/`
turns a 10-second rebuild into minutes. Keep the repo in the Linux home
directory:

```bash
cd ~
mkdir -p projects && cd projects
# copy the scaffold in, or:
git clone <your-repo-url> tomasulo-rv
cd tomasulo-rv
```

**Rule: `~/projects/...` always. Never `/mnt/c/Users/...`.**

You can still reach these files from Windows Explorer at `\\wsl$\Ubuntu-24.04\home\<user>\projects\` — that direction is fine for occasional access, like pointing Vivado at your RTL.

**Check:**

```bash
pwd    # should start with /home/, not /mnt/c/
```

---

## Step 7 — Python packages

```bash
python3 -m pip install --user --break-system-packages \
  'cocotb>=1.9' cocotb-bus cocotb-coverage pytest matplotlib
echo 'export PATH="$HOME/.local/bin:$PATH"' >> ~/.bashrc
source ~/.bashrc
```

Ubuntu 24.04 marks the system Python as externally managed, hence
`--break-system-packages`. If you'd rather keep things isolated, a venv works
equally well:

```bash
python3 -m venv ~/.venvs/rv && source ~/.venvs/rv/bin/activate
pip install 'cocotb>=1.9' cocotb-bus cocotb-coverage pytest matplotlib
```

If you use a venv, remember to activate it in every new shell, or add the
`source` line to `~/.bashrc`.

**Check:**

```bash
cocotb-config --version && python3 -m pytest --version
```

---

## Step 8 — RISC-V toolchain

Prebuilt binaries, because building from source takes 30–40 minutes and buys
you nothing here:

```bash
cd ~
wget https://github.com/xpack-dev-tools/riscv-none-elf-gcc-xpack/releases/download/v14.2.0-3/xpack-riscv-none-elf-gcc-14.2.0-3-linux-x64.tar.gz
tar xf xpack-riscv-none-elf-gcc-*.tar.gz
mv xpack-riscv-none-elf-gcc-* ~/riscv-gcc
echo 'export PATH="$HOME/riscv-gcc/bin:$PATH"' >> ~/.bashrc
source ~/.bashrc
```

If that release URL 404s, browse
<https://github.com/xpack-dev-tools/riscv-none-elf-gcc-xpack/releases> and take
the newest `linux-x64` tarball.

Note the prefix is `riscv-none-elf-`, not `riscv32-unknown-elf-`. Tell the
build about it once:

```bash
echo 'export RISCV_PREFIX=riscv-none-elf-' >> ~/.bashrc
source ~/.bashrc
```

**Check:**

```bash
riscv-none-elf-gcc --version
riscv-none-elf-gcc -march=rv32im -mabi=ilp32 --print-multi-lib | head
```

---

## Step 9 — Spike (the golden reference model)

No prebuilt binaries exist, so this one compiles. ~10 minutes.

```bash
mkdir -p ~/src && cd ~/src
git clone https://github.com/riscv-software-src/riscv-isa-sim.git
cd riscv-isa-sim && mkdir build && cd build
../configure --prefix=$HOME/riscv
make -j$(nproc)
make install
echo 'export PATH="$HOME/riscv/bin:$PATH"' >> ~/.bashrc
source ~/.bashrc
```

**Check:**

```bash
spike --help 2>&1 | head -3
```

Any output means it's installed — Spike exits non-zero on `--help`, which is
normal and not a failure.

---

## Step 10 — VS Code with Remote-WSL

Install VS Code **on Windows** (not inside Ubuntu), then add the **WSL**
extension from Microsoft. From your Ubuntu terminal:

```bash
cd ~/projects/tomasulo-rv
code .
```

The first run installs a small server component inside WSL. After that: editor
and Git UI on Windows, terminal and toolchain in Linux, boundary invisible.

Worth adding: **TerosHDL** or **Verilog-HDL/SystemVerilog** for syntax
highlighting, and **Python** for the cocotb testbenches.

---

## Step 11 — Verify the whole stack

```bash
cd ~/projects/tomasulo-rv
bash scripts/check_env.sh
```

Everything should report `ok`. Then run the real thing:

```bash
make unit     # RTL unit tests -- seconds
make sw       # builds programs + Spike golden logs
make test     # full co-simulation regression
```

`make unit` passing means Verilator and the RTL are healthy. `make sw`
producing `.hex` and `.spike.log` files in `sw/build/` means the toolchain and
Spike are both working. At that point your environment is done and every
remaining failure is a design bug — which is exactly where you want to be.

---

## Step 12 — Vivado (later, when you reach M8)

Install Vivado **natively on Windows**, not inside WSL. JTAG board programming
works without the `usbipd-win` USB-passthrough dance, and synthesis is an
occasional batch job so the slower `\\wsl$\` path access doesn't matter.

Point Vivado at:

```
\\wsl$\Ubuntu-24.04\home\<user>\projects\tomasulo-rv\rtl
```

Don't let Vivado write its project files there — have it use a Windows-side
directory for build output, and keep WSL as the source of truth.

---

## Troubleshooting

| Symptom | Cause and fix |
|---|---|
| `bad interpreter: /bin/bash^M` | CRLF line endings. `sed -i 's/\r$//' <file>`, then confirm Step 5. |
| Builds inexplicably slow | Repo is on `/mnt/c/`. Move it to `~/projects/`. |
| WSL eating all RAM | `.wslconfig` missing or not applied. Re-check Step 2, then `wsl --shutdown`. |
| `cocotb-config: command not found` | `~/.local/bin` not on PATH, or venv not activated. See Step 7. |
| `make: riscv-none-elf-gcc: No such file` | `RISCV_PREFIX` unset in this shell. `source ~/.bashrc`. |
| Verilator 4.x from apt | `--binary` unsupported. Build Verilator 5.x from source. |
| WSL won't start after Windows update | `wsl --update`, then `wsl --shutdown`. |
| Disk usage never shrinks | `sparseVhd` not enabled. Add it (Step 2) and `wsl --shutdown`. |

**Backup, once things work:**

```powershell
wsl --export Ubuntu-24.04 D:\backups\ubuntu-rv.tar
```

Ten minutes now saves rebuilding the whole toolchain if something goes wrong
later. Restore with `wsl --import`.
