// find how many times a sorted array is rotated

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKRotation(vector<int> &nums)  {
        
        int n = nums.size();
        int low = 0, high = n - 1;
        // int mid = (low + high)/2;
        int mini = INT_MAX;
        int loc = -1;
        while (low <= high) {
            int mid = (low + high)/2;

            if (nums[low] <= nums[mid]) {  // left is sorted
                // mini = min(mini, nums[low]);
                if (nums[low] < mini){
                    mini = nums[low];
                    loc = low;
                }
                low = mid + 1;
            } else { //
                mini = min(mini, nums[mid]);
                if (nums[mid] < mini) {
                    mini = nums[mid];
                    loc = mid;
                }
                high = mid - 1;
            }
        }

        if (loc == n) return 0;
        else return  n - loc;
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

    int answer = sol.findKRotation(rotated_array);

    cout<<"Times Rotated: "<<answer<<endl;
}
