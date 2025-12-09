

//  Example 6 (Advance): Find maximum using linear scan

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

    int maxi = arr[0];
    for(int i=1; i<n; i++)
        if(arr[i] > maxi)
            maxi = arr[i];

    cout <<"Maximum Number is : ";
    cout << maxi;
    cout << endl;
}
