// Sum of the first to N numbers.

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter the Number : ";
    cin >> n;

    for(int i=1; i<=n; i++)
        sum += i;

    cout << "Sum of Total number : " <<  sum <<endl;
    return 0;
}
