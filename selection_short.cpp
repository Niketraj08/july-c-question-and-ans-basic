#include <bits/stdc++.h>
using namespace std;

void selsort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;                                         // Assume current position is minimum
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;                                    // Update min_idx if smaller element found
            }
        }
        // Swap minimum element with current position
        swap(arr[i], arr[min_idx]);
    }
}

void printArr(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {34,12,44,76,11,54};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Original array: ";
    printArr(arr, n);
    
    selsort(arr, n);
    
    cout << "Sorted array: ";
    printArr(arr, n);
    
    return 0;
}
