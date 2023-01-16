/*
Name: Pun VireakRoth
Department: Information Technology Engineering
Class: M3
Prepare for Dr.Srun Sovila
*/

#include <iostream>
using namespace std;

// 2. display an array
void displayArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// 3. Insert an element to the order array

void insertElement(int arr[], int size, int element)
{
    int i;
    for (i = size - 1; (i >= 0 && arr[i] > element); i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[i + 1] = element;
    size++;

    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

// 4. Delete an element from array

void deleteElement(int arr[], int size, int element)
{
    int index = -1;
    int i;
    // search the user prefer element
    for (i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            index = i;
            break;
        }
    }
    // shift the all the element that after delete element to the left
    if (index == -1)
    {
        cout << "Array don't have that element" << endl;
    }
    else
    {
        for (i = index; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
    }

    // print out the new array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

// 5. Implement Binary Search

int binarySearch(int arr[], int size, int element)
{
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            cout << "Yes Array have number " << element << endl;
            break;
        }
        else if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    // 1. Create an array of whatever type
    int myArray[] = {4, 7, 8, 9, 10, 11, 17, 22, 77};
    // called insert element array function
    insertElement(myArray, 9, 100);
    int searchElement;
    cout << "\nWhich element you wanna search: ";
    cin >> searchElement;
    // called binary search function
    binarySearch(myArray, 10, searchElement);

    cout << "\nEnter the Element to delete: ";
    int element;
    cin >> element;
    // called delete array
    deleteElement(myArray, 10, element);
}