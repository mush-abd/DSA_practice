#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {    
        int sum = 0;
        int n = size(nums);
        for (int i = 0;i < n; i++) {
            sum += nums[i];
        }
        int max = n * (n + 1)/2;
        return (max - sum);
    }
};

int main() {
    Solution sol;
    vector<int> nums = {8, 3, 0, 1, 5, 7, 2, 4};
    cout<<"Given array: ";
    for (int n : nums) {
        cout << n << " ";
    }
    cout << endl;

    int missing = sol.missingNumber(nums);
    cout << "Missing number: " << missing << endl;
    cin.ignore();
    cin.get();
    return 0;
}