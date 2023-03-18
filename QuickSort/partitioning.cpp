#include <iostream>
using namespace std;

// Partition function for QuickSort algorithm

int partition(int arr[], int low, int high)
{
    // Select the last element as the pivot
    int pivot = arr[high];

    int i = low - 1;

    // Traverse the array
    for (int j = low; j <= high - 1; j++)
    {
        // If the current element is smaller than or equal to the pivot
        if (arr[j] <= pivot)
        {
            // Increment index of smaller element
            i++;
            // Swap the current element with the element at index i
            swap(arr[i], arr[j]);
        }
    }

    // Swap the pivot element with the element at index i+1
    swap(arr[i + 1], arr[high]);

    // Return the partitioning element
    return (i + 1);
}

int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};

    // get the array size
    int n = sizeof(arr) / sizeof(arr[0]);

    // Call the partition function
    partition(arr, 0, n - 1);

    // Print the sorted array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
