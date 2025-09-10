#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
    string result = "";
        int balance = 0;

        for (char c : s) {
            if (c == '(') {
                if (balance > 0) result += c;
                balance++;
            } else {  // c == ')'
                balance--;
                if (balance > 0) result += c;
            }
        }

        return result;
    }
};


int main() {

    Solution sol;
    string s = "(()())(())";
    cout<<"string: "<<s<<endl;
    cout << sol.removeOuterParentheses(s) << endl; // Output: ()()()
    cin.ignore();
    cin.get();
    return 0;
}  
