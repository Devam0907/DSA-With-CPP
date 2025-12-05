
// Example 4: Sum of all elements

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout<< "Enter the Element No. ";
    cin >> n;
    int arr[n];

    cout<< "Enter the Value In Array : ";
    for(int i=0; i<n; i++)
     cin >> arr[i];

     cout <<" Total Sum of the Array Element : "; 
    for(int i=0; i<n; i++)
     sum += arr[i];

    cout << sum << endl;
    return 0;
}
