# Input
number = input().split()
order = list(input())

# Create a list for sorting
sort_list = ['A', 'B', 'C']

# Create and output new string
text = ""
for item in order:
    text = text + number[sort_list.index(item)] + " "
print(text)