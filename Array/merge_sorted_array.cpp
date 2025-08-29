#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int i = m - 1;
        int j = n - 1;

        int k = nums1.size() - 1;

       while (i>=0 && j>=0) {

            if(nums1[i] >= nums2[j]) {
                nums1[k] = nums1[i];
                i--;
                k--;
            } else {
                nums1[k] = nums2[j];
                j--;
                k--;
            }
        }
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
    }
};


int main() {

    Solution sol;

    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    sol.merge(nums1, 3, nums2, 3);

    cout << "Merged array: ";
    for (const auto& num : nums1) {
        cout << num << " ";
    }
    return 0;
}