#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int last_max = 0;
        int current_max = 0;
        for(int i = 0; i < size(nums); i++) {
            if (nums[i] == 1) {
                current_max++;
                if (current_max >= last_max) {
                    last_max = current_max;
            }
            } else {
                current_max = 0;
            }

        }
        return last_max;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    cout << "Given array: ";
    for (int n : nums) {
        cout << n << " ";
    }
    cout << endl;

    int maxOnes = sol.findMaxConsecutiveOnes(nums);
    cout << "Maximum consecutive ones: " << maxOnes << endl;
    cin.ignore();
    cin.get();
    return 0;

}