# write a Python program to count the Number of words in a file.
f = open('m7med.txt','r')
str = f.read()
f.close()
print(len(str.split()))