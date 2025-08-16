#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {

        // bool isit = false;
        int drop = 0;

        for (int i = 1; i < size(nums); i++){
            if(nums[i - 1] <= nums[i]) {
                continue;
            }
            else {
                drop++;
                if (drop > 1) {
                    return false;
                }
            }
        }
        if (((drop == 1) && nums[0] >= nums[nums.size() - 1]) || (drop == 0)) {
            return true;
        } else {
            return false;
            // cout<<nums[i];
        // return isit;
        }
    }
};

int main() {

    vector<int> nums = {3, 4, 5, 1, 2};
    Solution sol;
    // cout << sol.check(nums) << endl;

    bool result = sol.check(nums);

    if(result) {
        cout << "Array is sorted" << endl;
        cin.ignore();
        cin.get();
    } else {
        cout << "Array is not sorted" << endl;
        cin.ignore();
        cin.get();
    }
    return 0;
}