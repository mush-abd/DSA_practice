#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        

        int low = 0, high = nums.size() - 1;

        while (low <= high) {
            
            int mid = (low + high)/2;
            
            if (target == nums[mid]) {
                return mid;
                
            } 

            if (nums[low] <= nums[mid]) {
                if (nums[low] <= target && target < nums[mid]) { 
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            } else {
                if (nums[mid] < target && target <= nums[high]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }
        return -1;
    }
};


int main() {
    Solution sol;
    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 0;
    int result = sol.search(nums, target);
    cout << "Index of " << target << " is: " << result << endl;
    return 0;
}