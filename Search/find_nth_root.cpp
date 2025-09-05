#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int ifpow(int mid, int N, int m) {
        long long ans = 1;  // use long long to prevent overflow

        for (int i = 1; i <= N; i++) {
            ans *= mid;
            if (ans > m) return 2;   // greater than m
        }

        if (ans == m) return 1;      // exactly equal
        return 0;                    // smaller than m
    }

    int NthRoot(int N, int M) {
        if (M == 0 || M == 1) return M;

        int low = 1, high = M;

        while (low <= high) {
            int mid = (low + high) / 2;

            int midN = ifpow(mid, N, M);

            if (midN == 1) return mid;         // found exact root
            else if (midN == 0) low = mid + 1; // mid^N < M
            else high = mid - 1;               // mid^N > M
        }

        return -1; // not a perfect root
    }
};


int main() {

    Solution sol;

    int N = 3; // Example: Cube root
    int M = 27; // Example number

    cout << "Given number: " << M << " and N: " << N << endl;

    int rootValue = sol.NthRoot(N, M);
    if (rootValue != -1) {
        cout << N << "th root is: " << rootValue << endl;
    } else {
        cout << "No perfect " << N << "th root found." << endl;
    }

    return 0;
}