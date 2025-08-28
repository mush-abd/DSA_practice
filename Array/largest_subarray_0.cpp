#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxLen(vector<int>& arr) {
        int n = arr.size();
        int maxi = 0, sum = 0;
        unordered_map<int, int> hashmap;
        
        // Handle case where sum is 0 from start
        hashmap[0] = -1;

        for (int i = 0; i < n; i++) {
            sum += arr[i];

            if (hashmap.find(sum) != hashmap.end()) {
                maxi = max(maxi, i - hashmap[sum]);
            } else {
                hashmap[sum] = i;
            }
        }
        return maxi;
    }
};


int main() {

    Solution sol;
    vector<int> arr = {1, 2, -2, -3, -4, 3, 4};
    cout<<"Input array: ";
    for (auto i: arr) {
        cout<<i<<" ";
    }
    cout<<"\n";
    int maxLength = sol.maxLen(arr);
    cout << "Length of the largest subarray with 0 sum: " << maxLength << endl;

    return 0;
}