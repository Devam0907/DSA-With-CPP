
// Example 3: Find minimum element

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

    int minVal = arr[0];
    for(int i=1; i<n; i++)
        if(arr[i] < minVal)
            minVal = arr[i];
            
    cout <<"Minimum Element Number is : " ;
    cout << minVal << endl;
    return 0;
}
