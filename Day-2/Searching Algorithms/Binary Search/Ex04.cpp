
// Example 4: Upper Bound (first index where element > key)

#include <iostream>
using namespace std;

int upperBound(int arr[], int n, int key) {
    int ans = n;
    int s = 0, e = n-1;

    while(s <= e) {
        int mid = (s+e)/2;
        if(arr[mid] > key) {
            ans = mid;
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    return ans;
}

int main() {
    int arr[] = {2,3,5,7,9};
        cout <<"Index is : ";
    cout << upperBound(arr,5,5);
        cout << endl;
}
