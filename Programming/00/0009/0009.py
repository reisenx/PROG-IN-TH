# --------------------------------------------------
# File Name : 0009.py
# Problem   : ABC
# Author    : Worralop Srichainont
# Date      : 2025-07-26
# --------------------------------------------------

# Input numbers and sort them in ascending order
numbers = list(map(int, input().split()))
numbers.sort()

# Determine the output based on the input characters A, B, C
output = []
for char in input().strip():
    if char == "A":
        output.append(str(numbers[0]))
    elif char == "B":
        output.append(str(numbers[1]))
    elif char == "C":
        output.append(str(numbers[2]))

# Output the numbers in the order specified by the input characters
print(" ".join(output))
