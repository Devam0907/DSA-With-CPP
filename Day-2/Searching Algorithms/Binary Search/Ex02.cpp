
//  Example 2: Binary Search (Recursive)

#include <iostream>
using namespace std;

int binary(int arr[], int s, int e, int key) {
    if(s > e) return -1;

    int mid = s + (e - s)/2;

    if(arr[mid] == key) return mid;
    else if(key < arr[mid]) return binary(arr, s, mid-1, key);
    else return binary(arr, mid+1, e, key);
}

int main() {
    int arr[] = {1,2,3,4,5};
    cout <<"Index is : " ; 
    cout << binary(arr,0,4,3);
    cout << endl;
}
