
//Example 3: Count occurrences (Linear Search)

    #include <iostream>
using namespace std;

int main() {
    int n,x,count=0;
    cout << "Enter the No. ";

    cin >> n;
    int arr[n];

    cout <<"Insert the value In Array : ";
    for(int i=0;i<n;i++)
    cin >> arr[i];
    cout << "Enter the number of the How many time Repeat in Array : ";
    cin >> x;

    for(int i=0;i<n;i++)
        if(arr[i] == x)
            count++;

    cout << "Number Repeated is : ";
    cout << count;
    cout <<endl;
}
