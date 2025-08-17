#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int XOR = 0;
        for (int i = 0; i < size(nums); i++) {
            XOR = XOR ^ nums[i];
        }
        return XOR;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << "Given array: ";
    for (int n : nums) {
        cout << n << " ";
    }
    cout << endl;

    int single = sol.singleNumber(nums);
    cout << "Single number: " << single << endl;
    cin.ignore();
    cin.get();
    return 0;
}