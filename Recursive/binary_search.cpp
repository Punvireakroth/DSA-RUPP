#include <iostream>
using namespace std;

int binary_search(int arr[], int low, int high, int x)
{
    if (high >= low)
    {
        int mid = (high + low) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] > x)
        {
            return binary_search(arr, low, mid - 1, x);
        }
        else
        {
            return binary_search(arr, mid + 1, high, x);
        }
    }
    else
    {
        return -1;
    }
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 6;
    int result = binary_search(arr, 0, n - 1, x);
    (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result;
    return 0;
}
