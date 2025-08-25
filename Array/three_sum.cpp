#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n = nums.size();
        vector<vector<int>> answer;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {

            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int j = i + 1, k = n - 1;

            while (j < k) {

                int sum = (nums[i] + nums[j] + nums[k]);

                if (sum == 0) {
                    vector<int> triplets = {nums[i], nums[j], nums[k]};
                    answer.push_back(triplets);
                    j++;
                    k--;
                    while (j < k && nums[j] == nums[j - 1]) j++;
                    while (k > j && nums[k] == nums[k + 1]) k--;
                }
                else if (sum < 0) {
                    j++;
                }
                else {
                    k--;
                }
            }
        }

        return answer;
    }
};

int main() {

    Solution sol;

    vector<int> nums = {-1,0,1,2,-1,-4};

    cout<<"Given array: ";
    for (auto i: nums) {
        cout << i << " ";
    }
    cout << endl;

    vector<vector<int>> result = sol.threeSum(nums);

    cout << "Triplets that sum to zero:" << endl;
    for (auto triplet : result) {
        cout << "[";
        for (int i = 0; i < triplet.size(); i++) {
            cout << triplet[i];
            if (i < triplet.size() - 1) cout << ", ";
        }
        cout << "]" << endl;
    }

    return 0;
}