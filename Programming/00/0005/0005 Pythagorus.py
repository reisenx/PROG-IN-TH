# Input float
data = input().split()
a,b = float(data[0]), float(data[1])

# Find c (Pythagorus Theorem)
c = (a**2 + b**2)**0.5

# Output c in 6 decimal places
print("{:.6f}".format(c))