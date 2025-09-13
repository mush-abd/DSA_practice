#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {

        // if (s.size() != goal.size()) return false;

        // int n = s.size();
        // string new_s = s + s;
        // int check = 1;
        // for (int i = 0; i < n; i++) {
        //     check = 1;
        //     cout<<"i: "<<i<<endl;
        //     for (int j = 0; j < n; j++) {
        //         cout<<"j: "<<j<<", i + j: "<<i+j<<endl;
        //         if (goal[j] != new_s[i + j]) {
        //             check = 0;
        //             break;
        //         }
        //     }
        //     if (check == 1) {
        //         return true;
        //     }
        // }

        // return false;

        return s.size() == goal.size() && (s + s).find(goal) != string::npos;

    }
};


int main() {

    Solution sol;
    string s = "abcde", goal = "cdeab";
    cout<<"strings: "<<s<<", "<<goal<<endl;
    cout << boolalpha << sol.rotateString(s, goal) << endl; // Output: true
    cin.ignore();
    cin.get();
    return 0;
}