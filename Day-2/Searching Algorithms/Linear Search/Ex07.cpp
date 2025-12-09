
// Example 8 (Advance): Find minimum using linear scan

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the No. ";

    cin >> n;
    int arr[n];

    cout <<"Insert the value In Array : ";
    for(int i=0; i<n; i++) 
    cin >> arr[i];

    int mini = arr[0];

    for(int i=1; i<n; i++)
        if(arr[i] < mini)
            mini = arr[i];

    cout <<"Minimum Number is : ";
    cout << mini;
    cout << endl;
}
