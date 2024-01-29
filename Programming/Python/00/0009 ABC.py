# Input
number = [int(e) for e in input().split()]
order = str(input())

# Sorting
if(number[0] <= number[1] and number[0] <= number[2]):
    A = number[0]
    if(number[1] <= number[2]):
        B,C = number[1], number[2]
    elif(number[2] <= number[1]):
        B,C = number[2], number[1]
elif(number[1] <= number[0] and number[1] <= number[2]):
    A = number[1]
    if(number[0] <= number[2]):
        B,C = number[0], number[2]
    elif(number[2] <= number[0]):
        B,C = number[2], number[0]
elif(number[2] <= number[0] and number[2] <= number[1]):
    A = number[2]
    if(number[0] <= number[1]):
        B,C = number[0], number[1]
    elif(number[1] <= number[0]):
        B,C = number[1], number[0]

# Output
if(order == "ABC"):
    print(A,B,C)
elif(order == "ACB"):
    print(A,C,B)
elif(order == "BAC"):
    print(B,A,C)
elif(order == "BCA"):
    print(B,C,A)
elif(order == "CAB"):
    print(C,A,B)
elif(order == "CBA"):
    print(C,B,A)