#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>> ans;
        int n = intervals.size();
        int j = 0;
        sort(intervals.begin(), intervals.end());

        ans.push_back(intervals[0]);

        for (int i = 1; i < n; i++) {
            if (intervals[i][0] <= ans[j][1]) {
                if (ans[j][1] < intervals[i][1]) ans[j][1] = intervals[i][1];
            }  
            else {
                ans.push_back(intervals[i]);
                j++;
            }
        }
        return ans;
    }
};


int main() {
    Solution sol;
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    cout<<"Input intervals: \n";
    for (const auto& interval : intervals) {
        cout << "[" << interval[0] << ", " << interval[1] << "]\n";
    }
    vector<vector<int>> merged = sol.merge(intervals);
    cout << "Merged intervals: \n";
    for (const auto& interval : merged) {
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }
    return 0;
}