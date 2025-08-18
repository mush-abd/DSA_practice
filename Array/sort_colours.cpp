#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int place0= 0, place1 = 0, place2=0;

        for (int i = 0; i < nums.size(); i++) {
            
            if(nums[i] == 0) {
                place0++;
            }
            if(nums[i] == 1) {
                place1++;
            }
            if(nums[i] == 2) {
                place2++;
            }
        }
        for (int i = 0; i < place0; i++) {
            nums[i] = 0;
        }
        for (int i = place0; i < place0 + place1; i++) {
            nums[i] = 1;
        }
        for (int i = place0 + place1; i < place0 + place1 + place2; i++) {
            nums[i] = 2;
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    cout << "Given array: ";
    for (int n : nums) {
        cout << n << " ";
    }
    cout << endl;

    sol.sortColors(nums);
    cout << "Sorted array: ";
    for (int n : nums) {
        cout << n << " ";
    }
    cout << endl;
    cin.ignore();
    cin.get();
    return 0;
}