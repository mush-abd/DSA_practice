#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int last = 0;
        for (int i = 0; i < size(nums); i++) {
            // cout<<nums[i];
            if (nums[i] == 0) {
                last = i;
                break;
            }
            last++;
        }

        // cout<<last;

        for (int i = 0; i < size(nums); i++) {

            if (nums[i] != 0 && last < i) {
                int temp = nums[last];
                nums[last] = nums[i];
                nums[i] = 0;
                // cout<<"switch "<<nums[i]<<nums[last]<<endl;
                last++;
            }
        }
    }
};


int main() {
    Solution sol;
    vector<int> nums = {0, 1, 0, 3, 12};
    sol.moveZeroes(nums);
    for (int n : nums) {
        cout << n << " ";
    }
    cin.ignore();
    cin.get();
    return 0;
}

