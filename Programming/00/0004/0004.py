# --------------------------------------------------
# File Name : 0004.py
# Problem   : Character Checker
# Author    : Worralop Srichainont
# Date      : 2025-07-26
# --------------------------------------------------

# Input string
text = input().strip()

# Determine if the string is all uppercase, all lowercase, or mixed
if text.isupper():
    print("All Capital Letter")
elif text.islower():
    print("All Small Letter")
else:
    print("Mix")
