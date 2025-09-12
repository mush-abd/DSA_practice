#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string longest = strs[0];

        if (strs.empty()) return "";

        for (auto it : strs) {

            int n = longest.size();
            int m = it.size();
            int i = 0;
            for(; i < min(m,n); i++) {
                if (longest[i] != it[i]) {
                    break;
                }
            }
            longest = longest.substr(0, i);
            if (longest.empty()) return "";
            
        }
        return longest;
    }
};


int main() {

    Solution sol;
    vector<string> strs = {"flower","flow","flight"};
    cout<<"strings: ";
    for(auto it : strs) {
        cout<<it<<" ";
    }
    cout<<endl;
    cout << "longest common prefix: " << sol.longestCommonPrefix(strs) << endl; // Output: fl
    cin.ignore();
    cin.get();
    return 0;
}   
