
// Example 1 (Basic): Binary Search (Iterative)

#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int s = 0, e = n - 1;

    while(s <= e) {
        int mid = s + (e - s) / 2;

        if(arr[mid] == key) 
           return mid;
        else if(key < arr[mid])
          e = mid - 1;
        else s = mid + 1;
    }
    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    
    cout << "Array: ";
    
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    int index = binarySearch(arr, 5, 8);

    cout << "Index of 8 is: " << index << endl;
}

