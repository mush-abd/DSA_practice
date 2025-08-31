#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int low = 0, high = nums.size() - 1;
        if (nums.size() == 0) return {-1, -1};

        while (low <= high) {
            int mid = (low+high)/2;

            if (nums[mid] == target) {
                int ll = mid, hh = mid;
                while(ll - 1 >= 0 && nums[ll - 1] == target ){
                    ll--;
                };
                while(hh + 1 < nums.size() && nums[hh + 1] == target) {
                    hh++;
                };
                return {ll, hh};
            } else if (target > nums[mid]) {
                low = mid+1;
            } else{
                high = mid - 1;
            }
        }
        return {-1, -1};
        
    }
};


int main() {
    Solution sol;
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;
    vector<int> result = sol.searchRange(nums, target);
    cout << "Element found at indices: " << result[0] << " and " << result[1] << endl;

    return 0;
}