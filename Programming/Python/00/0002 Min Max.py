# Input data lines
N = int(input())

# Input number and put them in the list
number_list = []
for i in range(0,N):
    num = int(input())
    number_list.append(num)

# Output min and max of the number list
print(min(number_list))
print(max(number_list))