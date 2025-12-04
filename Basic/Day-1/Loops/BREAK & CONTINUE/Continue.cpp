// print the number after the check condition its doesn't print but other numbers prints.

#include <iostream>
using namespace std;

int main() {
    for(int i=1; i<=10; i++) {
        if(i == 5)
        continue ;
        cout << i << " "<<endl;
    }
    return 0;
}
