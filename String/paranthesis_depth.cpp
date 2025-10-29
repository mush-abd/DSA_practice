#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxDepth(string s) {
      int ans = 0;

        stack<char> st;
        for (char c : s) {
            if (c == '(') {
                st.push(c);
            } else if (c == ')') {
                st.pop();
            }
            
            ans = max(ans, (int)st.size());
        }
        
        return ans;  


    }
};


int main() {
    Solution sol;
    string s = "(1+(2*3)+((8)/4))+1";
    cout<<"original string: "<<s<<endl;
    int depth = sol.maxDepth(s);
    cout<<"maximum depth of parentheses: "<<depth<<endl;
    cin.ignore();
    cin.get();
    return 0;
}


