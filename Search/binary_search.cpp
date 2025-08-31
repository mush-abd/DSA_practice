#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        
        int low = 0, high = nums.size() - 1;

        // found = 0;
        while (low <= high) {
            int middle = (low + high)/2;  
            if (nums[middle] == target) {
                return middle;
            } else if (nums[middle] < target) {
                low = middle + 1;
            } else {
                high = middle - 1;
            }
        }
        return -1;
    }
};


int main() {

    Solution sol; 

    vector<int> nums = {1, 2, 3, 4, 5};
    int target = 3;
    int result = sol.search(nums, target);
    cout << "Element found at index: " << result << endl;

    return 0;
}