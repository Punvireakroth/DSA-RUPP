/*
    Name Pun VireakRoth
    Class M3
*/
// *********************************************************************** //
/*
1. pivot is selected by median-off-three;
2. and using insertion sort for sub-arrays, which is number items 2 or 3.
*/

#include <iostream>
using namespace std;

int partition(int arr[], int low, int high)
{
    // Select the median of the first, middle and last elements as the pivot
    int mid = low + (high - low) / 2;

    if (arr[low] > arr[mid])
        swap(arr[low], arr[mid]);

    if (arr[mid] > arr[high])
        swap(arr[mid], arr[high]);

    int pivot = arr[mid];

    int i = low;
    int j = high;

    while (true)
    {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i >= j)
            return j;
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

// Insertion Sort function
void insertionSort(int arr[], int low, int high)
{
    for (int i = low + 1; i <= high; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= low && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// QuickSort function
void quickSort(int arr[], int low, int high)
{
    // Base case
    if (low < high)
    {
        // Use Insertion Sort for small sub-arrays
        if (high - low + 1 <= 3)
        {
            insertionSort(arr, low, high);
            return;
        }

        // Partition the array
        int pi = partition(arr, low, high);

        // Sort the sub-arrays recursively
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};

    // get the array's size
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    // Print the sorted array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
