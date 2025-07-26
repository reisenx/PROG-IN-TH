# --------------------------------------------------
# File Name : 0001.py
# Problem   : Grading
# Author    : Worralop Srichainont
# Date      : 2025-07-26
# --------------------------------------------------

# Input scores
assignment_score = int(input())
midterm_score = int(input())
final_score = int(input())
total_score = assignment_score + midterm_score + final_score

# Determine the grade based on total score
if total_score >= 80:
    print("A")
elif total_score >= 75:
    print("B+")
elif total_score >= 70:
    print("B")
elif total_score >= 65:
    print("C+")
elif total_score >= 60:
    print("C")
elif total_score >= 55:
    print("D+")
elif total_score >= 50:
    print("D")
elif total_score >= 0:
    print("F")