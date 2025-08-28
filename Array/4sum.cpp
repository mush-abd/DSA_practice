#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        int n = nums.size();

        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 3; i++ ) {

            if (i > 0 && nums[i] == nums[i - 1]) continue;

            for (int j = i + 1; j < n - 2; j++) {

                if(j > i + 1 && nums[j] == nums[j - 1]) continue;

                int k = j + 1, l = n - 1;

                while (k < l) {
                    long long sum = (long long)nums[i] + (long long)nums[j] +
                                    (long long)nums[k] + (long long)nums[l];

                    if (sum < target) k++;
                    else if (sum > target) l--;

                    else if (sum == target) {

                        vector<int> quad = {nums[i], nums[j], nums[k], nums[l]};
                        ans.push_back(quad);
                        k++, l--;

                        while(k<l && nums[k - 1] == nums[k]) k++;
                        while(l>k && nums[l + 1] == nums[l]) l--;

                    }
                }
                
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;
    vector<vector<int>> result = sol.fourSum(nums, target);
    cout<<"Input array: ";
    for (auto i: nums) {
        cout<<i<<" ";
    }
    cout<<"\n";
    for (const auto& quad : result) {
        cout << "[";
        for (int i = 0; i < quad.size(); i++) {
            cout << quad[i];
            if (i < quad.size() - 1) cout << ", ";
        }
        cout << "]\n";
    }
    return 0;
}