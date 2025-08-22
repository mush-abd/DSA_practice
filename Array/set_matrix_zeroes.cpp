#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int n = matrix.size();
        int m = matrix[0].size();
        int col0 = matrix[0][0];

        for (int i = 0; i < n; i++) {

            for (int j = 0; j < m; j ++) {

                if (matrix[i][j] == 0){
                    if (j != 0) {
                        matrix[0][j] = 0;
                    } else {
                        col0 = 0;
                    }
                    matrix[i][0] = 0;
                }
            }
        }

        for (int i = n - 1; i >= 0; i--) {

            for (int j = m - 1; j > 0; j--) {

                if (matrix[i][0] == 0 or matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }

            }
        }

        if (col0 == 0) {
            for (int i = 0; i < n; i++)
            matrix[i][0] = 0;
        }
    }
};

int main() {

    Solution sol;
    vector<vector<int>> matrix = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };
    cout << "Original matrix:" << endl;
    for (auto it: matrix) {
        for (int val : it) {
            cout << val << " ";
        }
        cout << endl;
    }
    cout<<endl;
    sol.setZeroes(matrix);
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}