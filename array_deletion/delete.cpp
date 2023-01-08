/*
 * Name: Pun VireakRoth
 * Class: ITE M3
 * Array Deletion
 */

#include <iostream>
using namespace std;

int main()
{
    // create a new array
    int myArray[] = {7, 43, 40, 22, 10, 4};
    // get array size
    int size = sizeof(myArray) / sizeof(myArray[0]);

    cout << "This is array elements before delete" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << myArray[i] << " ";
    }

    cout << "\nWhich index you wanna delete? " << endl;
    int index;
    cin >> index;
    cout << "This is the array after delete" << endl;
    // move the element of array
    for (int i = index - 1; i < size; i++)
    {
        myArray[i] = myArray[i + 1];
    }
    size -= 1;
    // output
    for (int i = 0; i < size; i++)
    {
        cout << myArray[i] << " ";
    }
}
