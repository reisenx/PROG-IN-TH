# --------------------------------------------------
# File Name : 0013.py
# Problem   : Seven Dwarves
# Author    : Worralop Srichainont
# Date      : 2025-07-26
# --------------------------------------------------


# This code finds two numbers that sum up to a target value.
def get_two_sum(unsorted_nums: list[int], target: int) -> tuple[int, int]:
    # Sort the list to use two-pointer technique
    numbers = sorted(unsorted_nums)
    # Initialize two pointers
    left = 0
    right = len(numbers) - 1

    # Iterate until the two pointers meet
    while left < right:
        # Calculate the sum of the two numbers at the pointers
        current_sum = numbers[left] + numbers[right]
        # Check if the current sum matches the target
        if current_sum == target:
            return (numbers[left], numbers[right])
        # Adjust pointers based on the current sum
        elif current_sum < target:
            left += 1
        else:
            right -= 1
    # If no pair found, return a default value
    return (0, 0)


# Initializing constants
TOTAL_VALUE = 100
NUMBER_COUNT = 9

# Input the numbers
numbers = []
for _ in range(NUMBER_COUNT):
    numbers.append(int(input()))

# Calculate the target value for the two numbers to be removed
target = sum(numbers) - TOTAL_VALUE
# Find and remove the two numbers that sum to the target
for item in get_two_sum(numbers, target):
    numbers.remove(item)

# Output the remaining numbers
for num in numbers:
    print(num)
