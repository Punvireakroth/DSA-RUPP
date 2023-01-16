"""
Name: Pun VireakRoth
Class: M3
Department: Information Technology Engineering
Prepare for: Dr.Srun Sovila
"""

"""
Objective 
- Write a function, which will sort data of array by ascending or descending with bubble sort algorithm (Option of ascending or descending will be input by user) 
- Explain code by comments
"""

# small to big sort
def ascendingSort(arr):
    # get the length of array
    n = len(arr)
    #outer loop through each element of array
    for i in range(n):
        #inner loop, loop though array and reduce one most right element
        for j in range(0, n-i-1):
            # if the left element bigger than the right element
            if arr[j] > arr[j+1]:
                # swap the element
                arr[j], arr[j+1] = arr[j+1], arr[j]
    # Return the sorted ascending list
    return arr
# Big to small small
def descendingSort(arr):
    n = len(arr)
    #outer loop through each element of array
    for i in range(n):
        #inner loop, loop though array and reduce one most right element
        for j in range(0, n-i-1):
            # if the left element bigger than the right element
            if arr[j] < arr[j+1]:
                # swap the element
                arr[j+1], arr[j]  =  arr[j], arr[j+1]
    # Return the sorted ascending list
    return arr

# Initial the list
arr = [77, 40, 24, 12, 7, 10, 99]

# get user prefer sort input
choice = input("You want ascending(small -> big | click 'a') or descending order(big -> small | click 'd')? ")

# make condition of whether to sort ascending or descending
if(choice == 'a'):
    print("Sorted array ascending is:", ascendingSort(arr))
elif(choice == 'd'):
    print("Sorted array ascending is:", descendingSort(arr))
else:
    print('Invalid Input (You need to type a for "ascending" d for "descending"')
    