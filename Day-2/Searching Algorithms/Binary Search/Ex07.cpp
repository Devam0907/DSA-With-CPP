
// Example 8: Peak element in Mountain Array

#include <iostream>
using namespace std;

int peak(int arr[], int n) {
    int s = 0, e = n-1;

    while(s < e) {
        int mid = (s+e)/2;

        if(arr[mid] < arr[mid+1]) 
            s = mid + 1;
        else 
            e = mid;
    }
    return s;
}

int main() {
    int arr[] = {1,3,5,7,4,2};
    cout << peak(arr,6);
    cout<<endl;
}
