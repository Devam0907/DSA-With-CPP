
// Example 11: Frequency array (0 to 9)

#include <iostream>
using namespace std;

int main() {
    int n;
        cout<< "Enter the Element No. ";
    cin >> n;

    int arr[n];
        cout<< "Enter the Single Digit In Array : ";

    for(int i=0; i<n; i++) 
    cin >> arr[i];

    int freq[10] = {0};

    for(int i=0; i<n; i++)
        freq[arr[i]]++;

        cout <<"Count the Number are Repeated in Array : ";
    for(int i=0; i<10; i++)
        cout << i << " -> " << freq[i] << endl;

    return 0;
}

