#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int low = 0, high = size(nums) - 1;

        while (low <= high) {

            int middle = (low + high)/2;
            
            if (nums[middle] == target) {

                return middle;
            
            } else if (target > nums[middle]) {

                if (middle + 1 > nums.size() - 1) {
                    return nums.size();
                } else if (middle - 1 >= 0 && nums[middle - 1] > target) {
                    return middle;
                }
                low = middle + 1;

            } else {

                if (middle - 1 < 0) {
                    return 0;
                } else if (nums[middle - 1]  < target) {
                    return middle ;
                }
                high = middle - 1;
            }
        }
        return size(nums);
    }
};


int main() {

    Solution sol;
    vector<int> nums = {1, 3, 5, 6};
    int target = 5;
    int result = sol.searchInsert(nums, target);
    cout << "Element should be inserted at index: " << result << endl;

    return 0;
}