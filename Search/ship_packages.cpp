#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        
        int low = *max_element(weights.begin(), weights.end());
        int high = 0;

        int n = weights.size();

        for (int num : weights) {
            high += num;
        }

        while (low <= high) {

            int mid = (low + high)/2;


            int day_taken = 1;
            int cap = 0;
            for(int i = 0; i < n; i++) {
                
                if (cap + weights[i] <= mid) {
                    cap += weights[i];
                } else {
                    cap = weights[i];
                    ++day_taken;
                }
            }

            if (day_taken <= days) {
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
    vector<int> weights = {1,2,3,4,6,7,8,9,10, 100};
    cout<<"Given array: ";
    for(auto i: weights) cout<<i<<" ";
    cout<<endl;

    int days = 5;
    cout << sol.shipWithinDays(weights, days) << endl; // Output: 15
    return 0;

}