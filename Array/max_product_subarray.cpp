#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int maxi = INT_MIN;
        int prefix = 1, suffix = 1;
        int n = nums.size();

        for (int i = 0; i < n; i++) {

            if (prefix == 0) prefix = 1;
            if (suffix == 0) suffix = 1;

            prefix = prefix * nums[i];
            suffix = suffix * nums[n - i -1];

            maxi = max(maxi, max(prefix, suffix));
        }

        return maxi;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 0, 3, 1, -3, 4, -1, -2, 4};
    cout << sol.maxProduct(nums) << endl;
    return 0;
}
