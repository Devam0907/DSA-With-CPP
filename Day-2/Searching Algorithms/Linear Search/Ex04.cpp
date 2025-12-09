
// Example 4: Linear Search in string array

#include <iostream>
using namespace std;

int main() {
    string arr[] = {"ram", "shyam", "dev", "amit"};
    string key = "dev";

    cout <<"Index of this name is : " + key << endl;  
    for(int i=0; i<4; i++){
        if(arr[i] == key)
            cout << "Found at " << i;
    }
    cout <<endl;
}
