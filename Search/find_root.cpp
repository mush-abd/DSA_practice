#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long floorSqrt(long long n)  {
        
        if (n == 0 || n == 1) return n;

        int low = 1, high = n/2;

        while (low <= high) {

            int mid = (low + high)/2;
            if (mid*mid <= n && (mid+1)*(mid+1) > n) return mid;
            else if (mid*mid > n) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return -1;

    }
};


int main() {

    Solution sol;

    int number = 1;

    cout<<"Given number: "<<number<<endl;

    int sqrtValue = sol.floorSqrt(number);
    if (sqrtValue != -1) {
        cout<<"Square root (floor value) is: "<<sqrtValue<<endl;
    } else {
        cout<<"No square root found."<<endl;
    }

    return 0;
}