# --------------------------------------------------
# File Name : 0007.py
# Problem   : Herman
# Author    : Worralop Srichainont
# Date      : 2025-07-26
# --------------------------------------------------

import math

# Input the radius
radius = int(input())

circle_area = math.pi * (radius**2)
rectangle_area = 2 * (radius**2)

# Output the areas
print(f"{circle_area:.6f}")
print(f"{rectangle_area:.6f}")
