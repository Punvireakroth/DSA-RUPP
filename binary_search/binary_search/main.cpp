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

int main()
{
    // 1. Create an array of whatever type
    int myArray[] = {4, 7, 8, 9, 10, 11, 17, 22, 77};
    // called insert element array function
    insertElement(myArray, 9, 100);
    // called display array function
    // displayArray(myArray, 9);
}