# Write a Python program to count the number of lines in a text file.

f = open('m7med.txt','r')
lst = f.readlines()
f.close()
print(len(lst))