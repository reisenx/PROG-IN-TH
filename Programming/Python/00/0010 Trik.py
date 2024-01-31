# Input a string
string = input()

# Initial position = 1
position = 1

# Swap a ball
# A: Swap position 1 and 2
# B: Swap position 2 and 3
# C: Swap position 1 and 3
for letter in string:
    if(letter == 'A'):
        if(position == 1):
            position = 2
        elif(position == 2):
            position = 1
    elif(letter == 'B'):
        if(position == 2):
            position = 3
        elif(position == 3):
            position = 2
    elif(letter == 'C'):
        if(position == 1):
            position = 3
        elif(position == 3):
            position = 1

# Output
print(position)