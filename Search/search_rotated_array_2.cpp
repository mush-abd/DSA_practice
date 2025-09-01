//difference from search_rotated_array.cpp is that in this version we handle duplicates
//for example, if the array is [1, 0, 1, 1, 1] and the target is 0, the function should return the index of 0

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int search(vector<int>& nums, int target) {

        int low = 0, high = nums.size() - 1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (nums[mid] == target) {
                return {mid};
            }

            // If we have duplicates, we can't determine the sorted side
            if (nums[low] == nums[mid] && nums[mid] == nums[high]) {
                low++;
                high--;
            } else if (nums[low] <= nums[mid]) {
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
        return {-1};
    }

};

int main() {
    Solution sol;
    vector<int> nums = {1, 0, 1, 1, 1};
    int target = 0;
    int result = sol.search(nums, target);
    cout << "Index of " << target << " is: " << result << endl;
    return 0;
}   