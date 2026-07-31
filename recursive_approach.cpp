#include <iostream>
using namespace std;

int binser(int arr[], int low, int high, int tar)
{
    if (low > high)
        return -1;
    int mid = low + (high - low) / 2;
    if (arr[mid] == tar)
        return mid;
    if (arr[mid] < tar)
        return binser(arr, mid + 1, high, tar);
    else
        return binser(arr, low, mid - 1, tar);
}

int main()
{
    int arr[] = {35, 37, 45, 49, 51, 65, 77, 88, 91, 94, 97, 101}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 88;
    int result = binser(arr, 0, n - 1, target);
    cout << (result != -1 ? "Found at index: " : "Not found") << result << endl;
    return 0;
}   
