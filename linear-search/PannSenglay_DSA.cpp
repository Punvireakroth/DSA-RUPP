#include <iostream>
using namespace std;

int myArr[15] = {1, 1, 2, 3, 3, 4, 5, 6, 7, 8};

// show all element function
int showElement(int arr[])
{
    int result, i;
    for (i = 0; i < 15; i++)
    {
        cout << arr[i] << " ";
    }
    result = arr[i];
    return result;
}

// input a new element value to a position
void addElem(int arr[])
{
    int iElem;
    int newValue;
    int temp;
    int index;
    cout << "Which element you want to insert a new value ? : ";
    cin >> iElem;
    cout << "Isert the new value :";
    cin >> newValue;
    for (index = (iElem - 1); index < 15; index++)
    {
        temp = arr[index];
        arr[index] = newValue;
        newValue = temp;
    }
    cout << "new element are :";
    int i;
    for (i = 0; i < 15; i++)
    {
        cout << arr[i] << " ";
    }
}

// delete array element value function
void delElem(int arr[])
{
    int iElem;
    int temp;
    int index;
    cout << "Which element you want to delete ? : ";
    cin >> iElem;
    for (index = (iElem - 1); index < 15; index++)
    {
        temp = arr[index + 1];
        arr[index] = temp;
    }
    cout << "new element are :";
    int i;
    for (i = 0; i < 15; i++)
    {
        cout << arr[i] << " ";
    }
}

// find duplicate and non-duplicate element of array
int search_func(int arr[]) 
{
    int sValue;
    cout << "Enter a value you want to search :";
    cin >> sValue;

    int x = 0;
    for (int i = 0; i < 15; i++)
    {
        if (arr[i] == sValue)
        {
            x++;
        }
    }
    if (x > 1)
    {
        cout << "The value you searched (" << sValue << ") douplicated " << x << " times.";
    }
    else
    {
        cout << "The value that you searched (" << sValue << ") is a non-duplicate value.";
    }
}
// main function
int main()
{
    cout << "All the array elemets are : ";
    cout << showElement(myArr) << endl;
    cout << "Now time to add a new element." << endl;
    addElem(myArr);
    cout << endl
         << "Now time to delete an element." << endl;
    delElem(myArr);
    cout << endl;
    search_func(myArr);

    return 0;
}