#include<bits/stdc++.h>
using namespace std;

// initial algorithm
// Kadanes Algorithm
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int maxi = -10000;
        int sum = 0;
        for (int i = 0; i < size(nums); i++) {

            sum += nums[i];

            if (maxi < sum) {
                maxi = sum;
            }
            
            if (sum < 0) {
                sum = 0;
            }
        }
        return maxi;
    }
};


int main() {

    Solution sol;
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};

    cout<<"Given array is: ";
    for (int i = 0; i < size(nums); i++) {
        cout << nums[i] << " ";
    }
    
    cout << endl;

    int maxSum = sol.maxSubArray(nums);
    cout << "Maximum subarray sum is: " << maxSum << endl;

    return 0;   
}