# Write a Python program to write a “list” to a file.
lst = ['my','name','is','mohamed']
f = open('m7med.txt','w')
f.write(' '.join(lst))
f.close()