#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

long long merge(vector<int>& nums, int low, int mid, int high) {
        
        vector<int> temp;
        int left = low, right = mid + 1;
        long long invCount = 0;
        int j = mid + 1;

        for (int i = low; i <= mid; i++) {
            while(j <= high && (long long)nums[i] > 2LL * (long long)nums[j]) {
                j++;
            }
            invCount += (j - (mid + 1));
        }

        while (left <= mid && right <= high) {
            if (nums[left] <= nums[right]) {
                temp.push_back(nums[left++]);
            } else {
                temp.push_back(nums[right++]);

            }
        }

        while (left <= mid) temp.push_back(nums[left++]);
        while (right <= high) temp.push_back(nums[right++]);

        for (int i = low; i <= high; i++) {
            nums[i] = temp[i - low];
        }

        return invCount;
    }
    
    long long mergeSort(vector<int>& nums, int low, int high) {
        if (low >= high) return 0;
        int mid = low + (high - low) / 2;

        long long invCount = 0;

        invCount += mergeSort(nums, low, mid);
        invCount += mergeSort(nums, mid + 1, high);
        invCount += merge(nums, low, mid, high);
        return invCount;
    }

    int reversePairs(vector<int>& nums) {
        
        return mergeSort(nums, 0, nums.size() - 1);
    }
};


int main() {
    Solution sol;
    vector<int> nums = {1, 3, 2, 3, 1};
    cout << sol.reversePairs(nums) << endl;
    return 0;
}