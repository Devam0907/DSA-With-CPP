// use the Switch Case for Menu Program. 

#include <iostream>
using namespace std;

int main() {
    int choice;
    cout<<"Enter The Choice Number : ";
    cin >> choice;

    switch(choice) {
        case 1: cout << "Start"<<endl; break;
        case 2: cout << "Settings"<<endl; break;
        case 3: cout << "Exit"<<endl; break;
        default: cout << "Invalid"<<endl;
    }
    return 0;
}
