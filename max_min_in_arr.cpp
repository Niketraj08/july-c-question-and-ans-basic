#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxVal = INT_MIN;
    int minVal = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }

    cout << "Max ele: " << maxVal << endl;
    cout << "Min ele: " << minVal << endl;

    return 0;
}