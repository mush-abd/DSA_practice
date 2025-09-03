#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int n = nums.size();
        int low = 0, high = n - 1;

        while (low <= high) {

            int mid = (low + high)/2;
            // cout<<"0, mid:"<<mid<<" nums[mid]: "<<nums[mid]<<endl;
            if (mid + 1 <= high && nums[mid] == nums[mid + 1] && (n - mid)%2 == 0) {
                // cout<<"1, mid = "<<nums[mid]<<endl;
                high = mid - 1;
                // cout<<"new high = "<<nums[mid]<<endl;
            } else if (mid + 1 <= high && nums[mid] == nums[mid + 1] && (n - mid)%2 == 1) {
                // cout<<"2, mid = "<<nums[mid]<<endl;
                low = mid + 2;
                // cout<<"new low = "<<nums[mid]<<endl;
            } else if (mid - 1 >= low && nums[mid] == nums[mid - 1] && (n - mid)%2 == 0) {
                // cout<<"3, mid = "<<nums[mid]<<endl;
                low = mid + 1;
                // cout<<"new low = "<<nums[mid]<<endl;
            } else if (mid - 1 >= low && nums[mid] == nums[mid  - 1] && (n - mid)%2 == 1) {
                // cout<<"4, mid = "<<nums[mid]<<endl;
                high = mid - 2;
                // cout<<"new high = "<<nums[mid]<<endl;
            } else {
                // cout<<"return";
                return nums[mid];
            }

        }
        return 0;
    }

};

int main() {

    Solution sol;

    vector<int> sorted_array = {1,1,2,3,3,4,4,6,6};
    cout<<"Sorted Array: ";
    for(int i=0; i<sorted_array.size(); i++) {
        cout<<sorted_array[i]<<" ";
    }
    cout<<endl;
    cout<<"Single Element: "<<sol.singleNonDuplicate(sorted_array)<<endl;

}