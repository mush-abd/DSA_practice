#include<bits/stdc++.h>
using namespace std;

/*
Given an array of integers nums and an integer k, 
return the total number of subarrays whose sum equals to k.
*/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int presum = 0;
        int cnt = 0;
        int n = size(nums);
        unordered_map<int, int> hashmap;
        hashmap[0] = 1;

        for (int i = 0; i < n; i++) {
            presum += nums[i];
            int remove = presum - k;
            cnt += hashmap[remove];
            hashmap[presum] += 1;
        }

        return cnt;
    }
};


int main() {

    Solution sol;

    vector<int> nums = {1, 2, 3, -3, 1, 1, 1, 4, 2, -3};
    int k = 3;

    cout << "Given array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << "\nSubarray sum equals to " << k << ": " << sol.subarraySum(nums, k) << endl;

    return 0;
    
}