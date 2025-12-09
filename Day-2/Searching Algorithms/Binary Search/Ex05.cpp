
// Example 9: Search in Rotated Sorted Array

#include <iostream>
using namespace std;

int searchRotated(int arr[], int n, int key) {
    int s = 0, e = n - 1;

    while (s <= e) {
        int mid = (s + e) / 2;
        cout << "Checking mid: " << mid << " (arr[mid] = " << arr[mid] << ")" << endl;

        if (arr[mid] == key) return mid;

        if (arr[s] <= arr[mid]) { 
            if (key >= arr[s] && key < arr[mid]) e = mid - 1;
            else s = mid + 1;
        } else {  
            if (key > arr[mid] && key <= arr[e]) s = mid + 1;
            else e = mid - 1;
        }
    }
    return -1;  
}

int main() {
    int arr[] = {4, 5, 6, 7, 1, 2, 3};  
    int key = 2;  
    int n = sizeof(arr) / sizeof(arr[0]);  

    int result = searchRotated(arr, n, key);
    cout << "Index of key " << key << ": " << result << endl;
}
