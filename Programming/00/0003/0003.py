# --------------------------------------------------
# File Name : 0003.py
# Problem   : Matrix Addition
# Author    : Worralop Srichainont
# Date      : 2025-07-26
# --------------------------------------------------

# Input two matrices of the same size
rows, cols = map(int, input().split())
matrix1 = []
matrix2 = []
for _ in range(rows):
    matrix1.append(list(map(int, input().split())))
for _ in range(rows):
    matrix2.append(list(map(int, input().split())))

# Output the sum of the two matrices
sum_matrix = []
for i in range(rows):
    row = []
    for j in range(cols):
        row.append(matrix1[i][j] + matrix2[i][j])
    sum_matrix.append(row)

# Print the sum matrix
for row in sum_matrix:
    print(" ".join(map(str, row)))
