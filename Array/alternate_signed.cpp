#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        int pos = 0;
        int neg = 1;
        int n = size(nums);
        vector<int> new_nums(n);

        for (int i = 0; i < n; i++) {

            if (nums[i] > 0) {
                new_nums[pos] = nums[i];
                pos+=2;
            }
            if (nums[i] < 0) {
                new_nums[neg] = nums[i];
                neg+=2;
            }
        }
        return new_nums;
    }
};


int main() {

    Solution sol;
    vector<int> nums = {3,1,-2,-5,2,-4};
    cout<<"Original array: ";
    for(int i=0;i<size(nums);i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;

    vector<int> rearranged = sol.rearrangeArray(nums);
    cout<<"Rearranged array: ";
    for(int i=0;i<size(rearranged);i++){
        cout<<rearranged[i]<<" ";
    }
    cout<<endl;

    return 0;
}