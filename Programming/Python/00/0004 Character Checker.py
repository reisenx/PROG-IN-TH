# Input text
text = str(input())

# Check the character
if(text.isupper() == True):
    print("All Capital Letter")
elif(text.islower() == True):
    print("All Small Letter")
elif(text.isupper() == False and text.islower() == False):
    print("Mix")