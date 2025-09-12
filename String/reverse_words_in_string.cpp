#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        
        int n = s.size();
        // int is_start = 1;
        int start = n-1;
        int cnt = 0;
        vector<string> temp;

        for(int i = n-1; i >= 0; i--) {

            // cout<<"i: "<<i<<", s[i]: "<<s[i]<<endl;

            if (cnt == 0 && s[i] == ' ') { // || start == n - 1 && s[i] == ' ') {
                // cout<<"One\n";
                --start;
                continue;
            } else if (cnt == 0 && s[i] != ' ') { // && is_start == 1) {
                // cout<<"Two\n";
                cnt = 1;
                start = i;
                // is_start = 0;
            } else if (cnt > 0 && s[i] != ' ') { // && is_start == 0) {
                // cout<<"Three\n";
                ++cnt;
                --start;
            } else if (cnt > 0 && s[i] == ' ') {
                
                temp.push_back(s.substr(start, cnt));
                // if (temp == "") {
                //     // cout<<"FourA\n";
                //     temp += s.substr(start, cnt);
                // } else {
                //     // cout<<"FourB\n";
                //     temp += " " + s.substr(start , cnt);
                // }
                cnt = 0;
                start = i; 
                // end = i;
                // is_start = 1;
            }
            
            if(i == 0 && cnt > 0) {
                // cout<<"Five\n";
                temp.push_back(s.substr(start , cnt));
                // if (temp == "") {
                //     temp += s.substr(start , cnt);
                // } else {
                // temp += " " + s.substr(start , cnt);
                // }
            }
        }
        string result = "";
        for(int i = 0; i < temp.size(); i++) {
            if (i == 0) {
                result += temp[i];
            } else {
                result += " " + temp[i];
            }
        }
        return result;
    }

};


int main() {

    Solution sol;
    string s = "  hello world  ";
    cout<<"string: "<<s<<endl;
    cout << sol.reverseWords(s) << endl; // Output: "world hello"
    cin.ignore();
    cin.get();
    return 0;
}