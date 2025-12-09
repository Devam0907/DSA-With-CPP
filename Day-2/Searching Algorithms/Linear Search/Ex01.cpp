

//  Example 1: Linear Search returning index

#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) 
            return i;
    }
    return -1;
}

int main() {
    int n, key;
    cout << "Enter the No. ";
    cin >> n;
    int arr[n];

    cout <<"Insert the value In Array : ";
    for(int i=0; i<n; i++)
    cin >> arr[i];
        cout <<"Fin the Index of this Number : ";

    cin >> key;

    cout <<"Index Number is : ";
    cout << linearSearch(arr, n, key);
    cout << endl;
    return 0;
}
