#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    long long merge(vector<int>& nums, int low, int mid, int high) {
        vector<int> temp;
        int left = low, right = mid + 1;
        long long invCount = 0;

        while (left <= mid && right <= high) {
            if (nums[left] <= nums[right]) {
                temp.push_back(nums[left++]);
            } else {
                temp.push_back(nums[right++]);
                invCount += (mid - left + 1); // Count inversions
            }
        }

        while (left <= mid) temp.push_back(nums[left++]);
        while (right <= high) temp.push_back(nums[right++]);

        for (int i = low; i <= high; i++) {
            nums[i] = temp[i - low];
        }

        return invCount;
    }
    
    long long mergeSort(vector<int>& nums, int low, int high) {
        if (low >= high) return 0;
        int mid = low + (high - low) / 2;
        long long invCount = 0;
        invCount += mergeSort(nums, low, mid);
        invCount += mergeSort(nums, mid + 1, high);
        invCount += merge(nums, low, mid, high);
        return invCount;
    }

   long long int numberOfInversions(vector<int> nums) {
        
        int low = 0;
        int high = nums.size() - 1;
        return mergeSort(nums, low, high);

    }

};


int main() {
    Solution sol;
    vector<int> arr = {2, 4, 1, 3, 5};
    cout<<"Input array: ";
    for (auto i: arr) {
        cout<<i<<" ";
    }
    cout<<"\n";
    long long int invCount = sol.numberOfInversions(arr);
    cout << "Number of inversions: " << invCount << endl;

    return 0;
}