#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int n = matrix.size();
        int m = matrix[0].size();
        int f_row = 0;
        int l_row = n - 1;
        int f_col = 0;
        int l_col = m - 1;
        vector<int> traversal;
        while (f_col <= l_col && f_row <= l_row) {
                for (int i = f_col; i <= l_col; i++) {
                    traversal.push_back(matrix[f_row][i]);
                }
                f_row++;
                for (int i = f_row; i <= l_row; i++) {
                    traversal.push_back(matrix[i][l_col]);
                }
                l_col--;
            if (f_row <= l_row) {
                for (int i = l_col; i >= f_col; i--) {
                    traversal.push_back(matrix[l_row][i]);
                }
                l_row--;
            }
            if (f_col <= l_col) {  
                for (int i = l_row; i >= f_row; i--) {
                    traversal.push_back(matrix[i][f_col]);
                }
                f_col++;
            }
        }
    return traversal;
        
    }
};



int main() {

    Solution sol;

    vector<vector<int>> matrix = {
        {1, 2, 3, 10},
        {4, 5, 6, 11},
        {7, 8, 9, 12}
    };

    cout<<"Original Matrix: "<<endl;
    for(auto it:matrix) {
        for(auto jt:it) {
            cout<<jt<<" ";
        }
        cout<<endl;
    }

    vector<int> result = sol.spiralOrder(matrix);
    cout<<"Spiral Order: ";
    for(auto it:result) {
        cout<<it<<" ";
    }
    cout<<endl;

    return 0;
}