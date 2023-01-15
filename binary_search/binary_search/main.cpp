#include <iostream>
using namespace std;

void displayArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int myArray[] = {4, 7, 8, 9, 10, 11, 17, 22, 77};
    displayArray(myArray, 9);
}