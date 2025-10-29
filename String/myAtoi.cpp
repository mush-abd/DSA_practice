#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        if (s.empty()) {
            return 0;
        }
        
        // Use standard library constants
        const long long MAX_INT = INT_MAX;
        const long long MIN_INT = INT_MIN;
        
        int i = 0;
        int n = s.length();
        
        // Step 1: Skip leading whitespace
        while (i < n && s[i] == ' ') {
            i++;
        }
        
        // Check if we've reached the end
        if (i == n) {
            return 0;
        }
        
        // Step 2: Check for sign
        int sign = 1;
        if (s[i] == '+') {
            i++;
        } else if (s[i] == '-') {
            sign = -1;
            i++;
        }
        
        long long result = 0;
        while (i < n && isdigit(s[i])) {
            int digit = s[i] - '0';
            result = result * 10 + digit;
            
            if (sign * result <= INT_MIN) {
                return INT_MIN;
            }
            if (sign * result >= INT_MAX) {
                return INT_MAX;
            }
            
            i++;
        }
        
        return static_cast<int>(result * sign);

    }
};

int main() {
    Solution sol;
    string s = "   -42";
    cout<<"original string: "<<s<<endl;
    int num = sol.myAtoi(s);
    cout<<"converted integer: "<<num<<endl;
    cin.ignore();
    cin.get();
    return 0;
}   