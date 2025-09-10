#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int count_k(vector<int>& nums, int mid, int n) {

        long long sum = 0;
        int count = 1;

        for(int i = 0; i < n; i++) {
            if (sum + nums[i] <= mid) {
                sum+= nums[i];
            } else {
                sum = nums[i];
                ++count;
            }
        }

        return count;
    }


    int splitArray(vector<int>& nums, int k) {
        
        int n = nums.size();

        if (k > n) return -1;

        int low = *max_element(nums.begin(), nums.end());
        int high = 0;

        for (int num : nums) high+= num;

        while (low <= high) {

            int mid = (high + low)/2;
            
            int count = count_k(nums, mid, n);

            if (count <= k) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};




int main() {

    Solution sol;
    vector<int> arr = {7,2,5,10,8};
    int k = 3;
    cout<<"array: ";
    for(auto i: arr) cout<<i<<" ";
    cout<<endl;
    cout << sol.splitArray(arr, k) << endl; // Output: 18
    return 0;

}