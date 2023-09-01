# write a python program to access environment variables.
import os
print("All Values of OS environment ")
for key, value in os.environ.items():
   print(f"{key}: {value}")
   print('='*50)
    
key_value = input("Enter the key of the environment variable: ")
print("The value of " + key_value +" is: ", os.environ[key_value])