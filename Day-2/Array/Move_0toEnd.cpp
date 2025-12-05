
// Example 10: Move all zeros to end

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

    int index = 0;

    for(int i=0; i<n; i++)
        if(arr[i] != 0)
            arr[index++] = arr[i];

    while(index < n)
        arr[index++] = 0;

    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
cout << endl;
    return 0;
}
