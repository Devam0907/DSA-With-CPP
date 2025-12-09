

// Example 2: Linear Search returning TRUE/FALSE

#include <iostream>
using namespace std;

bool findElement(int arr[], int n, int key) {
    for(int i=0; i<n; i++) {
        if(arr[i] == key)
            return true;
    }
    return false;
}

int main() {
    int arr[] = {10,20,30,40};
    int key = 30;

    cout << findElement(arr, 4, key);
    cout << endl;
}
