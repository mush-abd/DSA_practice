#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int n = nums.size();
        if (n == 1) return 0;
        if (nums[0] > nums[1]) return 0;
        if (nums[n - 1] > nums[n - 2]) return n - 1;

        int low = 1, high = n - 2;
        while (low <= high) {

            int mid = (low + high)/2;

            if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1]) {
                return mid;
            } else if (nums[mid - 1] > nums[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

    return - 1;

    }
};



int main() {

    Solution sol;

    vector<int> array = {1, 2, 1, 3, 5, 6, 4};

    cout<<"Given array: ";
    for(int i=0; i<array.size(); i++) {
        cout<<array[i]<<" ";
    }
    cout<<endl;

    int peakIndex = sol.findPeakElement(array);
    if (peakIndex != -1) {
        cout<<"Peak element found at index: "<<peakIndex<<endl;
    } else {
        cout<<"No peak element found."<<endl;
    }

    return 0;
}