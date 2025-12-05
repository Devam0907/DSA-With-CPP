
//Example 5: Linear Search

#include <iostream>
using namespace std;

int main() {
    int n, key;
        cout<< "Enter the Element No. ";
    cin >> n;

    int arr[n];
    cout<< "Enter the Value In Array : ";

    for(int i=0; i<n; i++) 
    cin >> arr[i];
    cout<< "Insert the Element for Check in Array :  ";
    cin >> key;

    for(int i=0; i<n; i++){
        if(arr[i] == key){
            cout << "Found at index is : " << i<< endl;
            return 0;
        }
    }

    cout << "Not Found";
    return 0;
}
