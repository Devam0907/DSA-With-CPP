
//  Example 6 (Advance): Square Root using Binary Search

#include <iostream>
using namespace std;

int sqrtBinary(int x) {
    int s = 0, e = x, ans = 0;

    while (s <= e) {
        int mid = (s + e) / 2;
        cout << "mid = " << mid << ", mid*mid = " << mid * mid << endl;

        if (mid * 1LL * mid <= x) {
            ans = mid; 
            s = mid + 1; 
        } else {
            e = mid - 1;  
        }
    }
    return ans;
}

int main() {
    int num = 40;
    cout << "Finding the integer square root of " << num << "..." << endl;
    int result = sqrtBinary(num);
    cout << "The integer square root of " << num << " is: " << result << endl;
    return 0;
}
