#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int n = size(nums); 
        unordered_set<int> uset (nums.begin(),nums.end());
        int longest = 0;

        for (auto it: uset) {
            if (uset.find(it - 1) == uset.end()) {
                int cnt = 1; 
                int x = it;
                while (uset.find(x+1) != uset.end()) {
                x++; 
                cnt++;
                }
            longest = max(longest, cnt);
            
            }
        }
    return longest;

    }
};


int main() {
    Solution sol;
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    cout << "Original array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    cout << "Longest consecutive sequence length: ";
    cout << sol.longestConsecutive(nums) << endl;  // Output: 4
    return 0;
}