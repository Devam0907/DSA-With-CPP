

// Example 8: Check if array is sorted

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<< "Enter the Element No. ";
    cin >> n;

    int arr[n];
    cout<< "Enter the Value In Array : ";

    for(int i=0; i<n; i++) 
    cin >> arr[i];

    bool sorted = true;

    for(int i=1; i<n; i++){
        if(arr[i] < arr[i-1]){
            sorted = false;
            break;
        }
    }

    if(sorted) cout << "Sorted"<< endl;
    else cout << "Not Sorted"<< endl;

    return 0;
}
