# Input X1 and S
data = input().split()
X1,S = int(data[0]), int(data[1])

# Calculate and Ouput X2
# S = (X1 + X2)/2
# 2S = X1 + X2
# X2 = 2S - X1
X2 = 2*S - X1
print(X2)