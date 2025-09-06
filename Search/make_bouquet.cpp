#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool can_make_b(vector<int>& bloomDay,int mid, int n, int m, int k) {

        int cnt = 0;
        int cnt_temp = 0;
        for (int i = 0; i < n; i++) {
            if (bloomDay[i] <= mid) {
                cnt_temp++;
                if (cnt_temp == k) {
                    cnt++;
                    cnt_temp = 0;
                }
            } else {
                cnt_temp = 0;
            }
        }
        
        if (cnt >= m) return 1;
        else return 0;

    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        
        int n = bloomDay.size();
        if ((long long)m*k > n) return -1;

        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());

        while (low <= high) {

            int mid = (low + high)/2;
            int num_flowers = n*k;
            int can_make = can_make_b(bloomDay,mid, n, m, k);
            
            if (can_make == 1) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }

        }
          return low;

    }
};


int main() {

    Solution sol;
    vector<int> bloomDay = {1,10,3,10,2};
    int m = 2;
    int k = 2;
    cout << sol.minDays(bloomDay, m, k) << endl; // Output: 3
    return 0;
}