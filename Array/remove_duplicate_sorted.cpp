#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums, int method) {
        vector<int> encountered;
        
        if (method == 1) {
            //Using brute force method
            set<int> myset;

            for (int i = 0; i < size(nums); i++) {
                myset.insert(nums[i]);
            }

            int index = 0;
            for (auto it: myset) {
                nums[index] = it;
                index++;
            }
            return index;
        } else {
        
            int i = 0;

            for (int j = 0; j < size(nums); j++) {

                if (nums[i] != nums[j]) {
                    i++;
                    nums[i] = nums[j];
                }
            }
            return i + 1;
        }
            
        }
};


int main() {
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5};
    Solution sol;
    cout << "Original array: ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    int newSize = sol.removeDuplicates(nums, 2);
    cout << "New size after removing duplicates: " << newSize << endl;
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++) {
        cout << nums[i] << " ";
    }
    cin.ignore();
    cin.get();
    cout << endl;
    return 0;
}