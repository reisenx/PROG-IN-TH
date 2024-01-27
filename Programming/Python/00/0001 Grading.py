# Input work, midterm and final score
work = int(input())
midterm = int(input())
final = int(input())

# Calculate the final score
score = work + midterm + final

# Grading
# A  80-100
# B+ 75-79
# B  70-74
# C+ 65-69
# C  60-64
# D+ 55-59
# D  50-54
# F  0-49
if(score>=80 and score<=100):
    print("A")
elif(score>=75 and score<=79):
    print("B+")
elif(score>=70 and score<=74):
    print("B")
elif(score>=65 and score<=69):
    print("C+")
elif(score>=60 and score<=64):
    print("C")
elif(score>=55 and score<=59):
    print("D+")
elif(score>=50 and score<=54):
    print("D")
else:
    print("F")