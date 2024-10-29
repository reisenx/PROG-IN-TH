# Input rows (M) and column (N)
# 3 2 --> ["3", "2"]
data = input().split()
M,N = int(data[0]), int(data[1])

# Create empty matrix
matrix_01 = []
matrix_02 = []

# Input first matrix
# Example input
# 1 2 3
# 3 2 1
# 1 2 3
# matrix_01 = [['1','2','3'],['3','2','1'],['1','2','3']]
for i in range(0,M):
    row = input().split()
    matrix_01.append(row)

# Input second matrix
# Example input
# 1 1 1
# 1 1 1
# 1 1 1
# matrix_01 = [['1','1','1'],['1','1','1'],['1','1','1']]
for i in range(0,M):
    row = input().split()
    matrix_02.append(row)

# Calculate and output a sum of 2 matrix
for i in range(0,M):
    line = ""
    for j in range(0,N):
        line = line + str(int(matrix_01[i][j]) + int(matrix_02[i][j])) + " "
    print(line)