# write a python program to test wether a passed letter is a vowel or not

user_input = input("Please enter a single character to check it vowel or not==> ").lower()

if ("auieo".find(user_input) != -1) :
    print("char is a vowel") 
else :
    print("char is not a vowel")