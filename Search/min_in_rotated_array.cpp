#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int findMin(vector<int>& nums) {
        
        int n = size(nums);
        int low = 0, high = n - 1;
        // int mid = (low + high)/2;
        int mini = INT_MAX;

        while (low <= high) {
            int mid = (low + high)/2;

            if (nums[low] <= nums[mid]) {  // left is sorted
                mini = min(mini, nums[low]);
                low = mid + 1;
            } else { //
                mini = min(mini, nums[mid]);
                high = mid - 1;
            }
        }

        return mini;
    }
};


int main() {

    Solution sol;

    vector<int> rotated_array = {5, 6, 7, 8, 9, 1, 2, 3, 4};

    cout<<"Sorted Array: ";
    for (auto it: rotated_array) {
        cout<<it<<" ";
    }
    cout<<endl;

    int answer = sol.findMin(rotated_array);
    
    cout<<"Min Element: "<<answer<<endl;
}
