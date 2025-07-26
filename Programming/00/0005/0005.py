# --------------------------------------------------
# File Name : 0005.py
# Problem   : Pythagorus
# Author    : Worralop Srichainont
# Date      : 2025-07-26
# --------------------------------------------------

# Input lengths of the two shorter sides
a, b = map(float, input().split())

# Calculate the length of the hypotenuse
c = (a**2 + b**2) ** 0.5

# Output the length of the hypotenuse
print(f"{c:.6f}")
