# write a python program to count the number 4 in a given list.

list_size = int(input("Please enter your list size==> "))

user_list = list(map(float, input("Enter your list numbers separated by space==> ").strip().split()))[:list_size]

count_num = user_list.count(4)

print(f"Number 4 appeared {count_num} times in the list")