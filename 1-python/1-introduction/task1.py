# write a python program to count the number 4 in a given list.
def count_number_4(nums):
    count = 0
    for num in nums:
        if num ==4:
            count = count + 1
    return count

print(count_number_4([1,2,3,4,5,4]))
