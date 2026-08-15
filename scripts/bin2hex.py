#!/usr/bin/env python3
"""Convert a flat binary into a $readmemh-compatible little-endian word image.

One 32-bit word per line, zero-padded to MEM_WORDS so $readmemh never leaves
uninitialized X's in the array (X's in instruction memory produce spectacular
and completely unhelpful failure modes).
"""
import sys
import argparse


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("binary")
    ap.add_argument("hexout")
    ap.add_argument("--words", type=int, default=16384)
    args = ap.parse_args()

    data = open(args.binary, "rb").read()
    if len(data) % 4:
        data += b"\x00" * (4 - len(data) % 4)

    nwords = len(data) // 4
    if nwords > args.words:
        print(f"error: image is {nwords} words, memory holds {args.words}",
              file=sys.stderr)
        return 1

    with open(args.hexout, "w") as f:
        for i in range(args.words):
            if i < nwords:
                w = int.from_bytes(data[i * 4:i * 4 + 4], "little")
            else:
                w = 0
            f.write(f"{w:08x}\n")

    print(f"[bin2hex] {args.binary} -> {args.hexout} "
          f"({nwords} words used of {args.words})")
    return 0


if __name__ == "__main__":
    sys.exit(main())
