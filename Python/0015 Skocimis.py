# Input 3 integers
number = [int(e) for e in input().split()]

# Find a difference between A,B and B,C
difference = [number[1]-number[0], number[2]-number[1]]

# Output
# Maximum turn is the longest distance - 1
print(max(difference) - 1)