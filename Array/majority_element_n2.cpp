#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        // pair<int, int> max[size(nums)];
        int count = 0;
        int element = 0;
        // int count[size[nums]];
        for (int i = 0; i < size(nums); i++) {
            
            if (count == 0) {
                count ++;
                element = nums[i];
                continue;
            }
            if (element == nums[i]) {
                count ++;
            }
            else {
                count--;
            }
        }

        return element;

    }
};


int main() {
    Solution sol;
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout << "Given array: ";
    for (int n : nums) {
        cout << n << " ";
    }
    cout << endl;

    int majority = sol.majorityElement(nums);
    cout << "Majority element: " << majority << endl;

    cin.ignore();
    cin.get();
    return 0;
}