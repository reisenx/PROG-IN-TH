# Input 9 number
nums = []
for i in range(9):
    num = int(input())
    nums.append(num)

# Find sum of all 9 number
sums = sum(nums)

# Remove the excess number from a list
for num1 in nums:
    num2 = sums - (100+num1)
    if(num2 in nums):
        nums.remove(num1)
        nums.remove(num2)
        break

# Output
nums = list(map(str,nums))
print("\n".join(nums))