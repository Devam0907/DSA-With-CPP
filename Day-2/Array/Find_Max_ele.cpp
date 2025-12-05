
// Example 2: Find maximum element
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<< "Enter the Element No. ";
    cin >> n;

    int arr[n];
    cout<< "Enter the Value In Array : ";
    for(int i=0; i<n; i++) cin >> arr[i];

    int maxVal = arr[0];
    for(int i=1; i<n; i++)
        if(arr[i] > maxVal)
            maxVal = arr[i];

            cout <<"Large Element Number is : " ;
    cout << maxVal << endl;
    return 0;
}
