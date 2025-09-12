#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        for(int i = n - 1; i >= 0; i--) {
            if((num[i] - '0') % 2 != 0) {
                return num.substr(0, i + 1);
            }
        }
        return "";
    }
};

int main() {

    Solution sol;
    string s = "3546824";
    cout<<"string: "<<s<<endl;
    cout << sol.largestOddNumber(s) << endl; // Output: 35427
    cin.ignore();
    cin.get();
    return 0;
}