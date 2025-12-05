// Example : Swapping two numbers

#include <iostream>
using namespace std;

int main() {
    int x, y;

    cout<< "Enter two numbers : ";
    cin >> x >> y;

    int temp = x;
    x = y;
    y = temp;

    cout << "After the Swapp the Number is  " << x << " " << y << endl;
    return 0;
}
