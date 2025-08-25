#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> answer(numRows);

        answer[0].push_back({1});
        // cout<<output;
        // answer[1].push_back({1,1});
        if (numRows > 1) {
            answer[1] = {1, 1};
        }
        for (int i = 2; i <numRows; i++) {
            int n = answer[i - 1].size();
            answer[i].push_back(answer[i -1][0]); 
            for (int j = 0; j < n - 1; j++) {
                    answer[i].push_back(answer[i - 1][j] + answer[i - 1][j + 1]);
                }
            answer[i].push_back(answer[i - 1][n - 1]);
        }
        return answer;
    }

};


int main() {

    Solution sol;

    int numRows = 7;

    vector<vector<int>> result = sol.generate(numRows);

    for (auto it: result) {
        for (auto i: it) {
            cout << i << " ";
        }
        cout << endl;
    }
}