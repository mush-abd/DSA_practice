#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long total_hours(vector<int>& piles, int k) {
        long long total_hours = 0;
        
        for (int pile : piles) {
            total_hours += (pile + k - 1) / k;  
        }
        return total_hours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());;
        while (low <= high) {
            
            int mid = (low + high)/2;
            long long hours = total_hours(piles, mid);

            if (hours <= h) {
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
    vector<int> piles = {3,6,7,11};
    int h = 8;
    cout << sol.minEatingSpeed(piles, h) << endl; // Output: 4
    return 0;
}