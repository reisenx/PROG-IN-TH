# Import math library
import math

# Input radius (R)
R = int(input())

# Calculate and output Euclidean geometry (pi*R^2) in 6 decimal places
print("{:.6f}".format(math.pi*(R**2)))

# Calculate and output Taxicab geometry (2*(R^2))
print("{:.6f}".format(2*(R**2)))