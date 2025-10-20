#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        unordered_map<char, int> mymap;
        // vector<pair<char,int>> myvect;

        for (auto it: s) {
            mymap[it]++;
        }
        vector<vector<char>> buckets(n + 1);

        for (auto const& [character, frequency] : mymap) {
            buckets[frequency].push_back(character);
        }

        s = "";
        for (int freq = n; freq > 0; freq--) {
            if (!buckets[freq].empty()) {
                for (auto c: buckets[freq]) {
                    s.append(freq, c);
                }
            }
        }

    return s;
    }
};



int main() {
    Solution sol;
    string s = "tree";
    cout<<"original string: "<<s<<endl;
    string sorted_s = sol.frequencySort(s);
    cout<<"sorted string: "<<sorted_s<<endl;
    cin.ignore();
    cin.get();
    return 0;
}