# --------------------------------------------------
# File Name : 0011.py
# Problem   : Modulo
# Author    : Worralop Srichainont
# Date      : 2025-07-26
# --------------------------------------------------

# Initializing constants
NUMBERS = 10
MODULO = 42

# Initialize a list to track which modulo values are present
has_modulo = [0] * MODULO

# Read numbers and mark their modulo values
for _ in range(NUMBERS):
    num = int(input())
    has_modulo[num % MODULO] = 1

# Count how many unique modulo values are present
print(sum(has_modulo))
