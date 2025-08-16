#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = size(nums);
        k = k % n;
        if (k == 0) {
            return;
        }
        int temp[k];

        for (int i = n - k; i < n; i++) {
            temp[i - (n - k)] = nums[i];
        }

        for (int i = n - k - 1; i >= 0; i--) {
            nums[i+k] = nums[i];
        }


        for (int i = 0; i < k; i++) {
            nums[i] = temp[i];
        }
    }
};


int main() {
    
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    Solution sol;
    sol.rotate(nums, 3);
    cout << "Array after rotation: ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    cin.ignore();
    cin.get(); // Wait for Enter key before exit
    return 0;
}