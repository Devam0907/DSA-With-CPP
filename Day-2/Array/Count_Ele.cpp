
//  Example 6: Count occurrences of an element
#include <iostream>
using namespace std;

int main() {
    int n, x, count = 0;
    cout<< "Enter the Element No. ";

    cin >> n;
    int arr[n];
    cout<< "Enter the Value In Array : ";

    for(int i=0; i<n; i++)
     cin >> arr[i];

 cout<< "Insert the Element for Check in Array :  ";
    cin >> x;

    for(int i=0; i<n; i++)
        if(arr[i] == x)
            count++;
    cout << count<< endl; // output is 1 it means element is store in array but output is 0 it means element is not there n array.
    return 0;
}
