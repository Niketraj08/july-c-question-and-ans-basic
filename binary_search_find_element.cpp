// C++ program to implement binary search
// #include <iostream>
// using namespace std;

// int binarySearch(int arr[], int n, int target) {
//     int low = 0, high = n - 1;
//     while (low <= high) {
//         int mid = low + (high - low) / 2;
//         if (arr[mid] == target)
//             return mid;
//         else if (arr[mid] < target)
//             low = mid + 1;
//         else
//             high = mid - 1;
//     }
//     return -1; 
// }

// int main() {
//     int arr[] = {35, 37, 45, 49, 51, 65, 77, 88, 91, 94, 97, 101};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int target = 88;

//     int result = binarySearch(arr, n, target);
//     if (result != -1)
//         cout << "Element found at index " << result << endl;
//     else
//         cout << "Element not found" << endl;

//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    int arr[] = {35, 37, 45, 49, 51, 65, 77, 88, 91, 94, 97, 101};
    int n = 12, target = 88;
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            cout << "Found at index: " << mid << endl;
            return 0;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << "Not found" << endl;
    return 0;
}
