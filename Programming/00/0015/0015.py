# --------------------------------------------------
# File Name : 0015.py
# Problem   : Skocimis
# Author    : Worralop Srichainont
# Date      : 2025-07-26
# --------------------------------------------------

# Input position of three kangaroos
a, b, c = map(int, input().split())

# Output the maximum possible moves,
# which is the largest gap between two adjacent kangaroos minus one
print(max(b - a, c - b) - 1)
