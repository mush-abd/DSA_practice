#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        int cnt1 = 0, cnt2 = 0, el1 = 0, el2 = 0;
        int n = nums.size();
        vector<int> majel;

        for (int i = 0; i < n; i++) {

            if (cnt1 == 0 && nums[i] != el2) {
                cnt1 = 1;
                el1 = nums[i];
            }
            else if (cnt2 == 0 && nums[i] != el1){
                cnt2 = 1;
                el2 = nums[i];
            }
            else if (el1 == nums[i]) 
                cnt1++;
            else if (el2 == nums[i])
                cnt2++;
            else {
                cnt1--;
                cnt2--;
            }
        }
        cnt1 = 0;
        cnt2 = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == el1) cnt1++;
            else if (nums[i] == el2) cnt2++;
        }
        if (cnt1 > n/3) {
        majel.push_back(el1);
        }
        if (cnt2 > n/3 && el1 != el2) {
        majel.push_back(el2);
        }

        return majel;


    }
};


int main() {

    Solution sol;

    vector<int> nums = {3, 2, 3, 1, 5, 2, 2, 3, 7, 1, 3, 3, 2, 2, 2, 3};

    cout<<"Given array: ";
    for (auto i: nums) {
        cout << i << " "; 
    }
    cout<<endl;

    vector<int> result = sol.majorityElement(nums);
    cout<<"Majority elements (more than n/3 times): ";
    for (auto i: result) {
        cout << i << " ";
    }
    cout<<endl;

    return 0;
}