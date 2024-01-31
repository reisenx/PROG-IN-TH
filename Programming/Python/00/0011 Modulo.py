# 1.) Input 10 numbers then Modulo with 42
# 2.) Store the modulo in the list if there's no that number yet
modulo_list = []
for i in range(0,10):
    number = int(input())
    modulo = number%42

    for j in range(0,42):
        if(modulo == j and modulo not in modulo_list):
            modulo_list.append(modulo)

# Output the length of modulo list
print(len(modulo_list))