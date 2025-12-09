
// Example 6 (Advance): Linear Search using recursion

#include <iostream>
using namespace std;

int recursiveSearch(int arr[], int n, int key, int i=0) {
    if(i == n) 
     return -1;
    if(arr[i] == key)
     return i;
    return recursiveSearch(arr, n, key, i+1);
}

int main() {
    int arr[] = {5,10,20,4,8};
    cout << recursiveSearch(arr,5,8);
    cout << endl;
}
