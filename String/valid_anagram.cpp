#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if (s.size() != t.size()) return false;

        int n = s.size();

        unordered_map<char, int> freq;

        for (int i = 0; i <n; i++) {
            freq[s[i]]++;
        }
        for (int i = 0; i < n; i++) {
            freq[t[i]]--;
        }
        
        for(auto it: freq) {
            if (it.second != 0) return false; 
        }
        return true;

    }
};


int main() {
    Solution sol;
    string s = "anagram", t = "nagaram";
    cout<<"strings: "<<s<<", "<<t<<endl;
    cout << boolalpha << sol.isAnagram(s, t) << endl; // Output: true
    cin.ignore();
    cin.get();
    return 0;
}