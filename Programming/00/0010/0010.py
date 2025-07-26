# --------------------------------------------------
# File Name : 0010.py
# Problem   : Trik
# Author    : Worralop Srichainont
# Date      : 2025-07-26
# --------------------------------------------------

# Initialize the ball position
pos = 1

for command in input().strip():
    # Swap positions of ball 1 and 2
    if command == "A":
        if pos == 1:
            pos = 2
        elif pos == 2:
            pos = 1

    # Swap positions of ball 2 and 3
    elif command == "B":
        if pos == 2:
            pos = 3
        elif pos == 3:
            pos = 2

    # Swap positions of ball 1 and 3
    elif command == "C":
        if pos == 1:
            pos = 3
        elif pos == 3:
            pos = 1

# Output the final position of the ball
print(pos)
