// Find The Largest Number of in Three Integer.

#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cout <<"Enter the Three Numbers : ";
    cin >> a >> b >> c ;

    if(a >= b && a >= c) cout << a <<" is Largest"<<endl;
    else if(b >= c) cout << b <<" is Largest"<<endl;
    else cout << c <<" is Largest"<<endl;

    return 0;
}
