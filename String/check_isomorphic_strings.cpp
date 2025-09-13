#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        unordered_map<char, char> s_t;
        unordered_map<char, char> t_s;
        int n = s.size();
        for ( int i = 0; i < n; i++) {
            
            char ss = s[i], tt = t[i];

            if (s_t.find(s[i]) == s_t.end()) {
                s_t[s[i]] = t[i];
            } else if (t[i] != s_t[s[i]]) {
                return false;
            }
            if (t_s.find(t[i]) == t_s.end()) {
                t_s[t[i]] = s[i];
            } else if (s[i] != t_s[t[i]]) {
                return false;
            }

        }

        return true;


    }
};


int main() {

    Solution sol;
    string s = "egg", t = "add";
    cout<<"strings: "<<s<<", "<<t<<endl;
    cout << boolalpha << sol.isIsomorphic(s, t) << endl; // Output: true
    cin.ignore();
    cin.get();
    return 0;
}   