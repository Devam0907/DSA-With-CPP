
// Example 9: Second largest element

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

    int largest = -1e9, second = -1e9;

    for(int i=0; i<n; i++){
        if(arr[i] > largest){
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest){
            second = arr[i];
        }
    }
cout <<"Second Largest Element is : ";
    cout << second<<endl;
    return 0;
}
