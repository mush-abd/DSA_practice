#include<bits/stdc++.h>
using namespace std;

int main() {

    cout<<"Enter the target sum: ";
    int target;
    cin >> target;

    cout<<"Enter the size of the array: ";
    int size;
    cin >> size;
    vector<int> nums(size);
    for (int i = 0; i < size; i++) {
        cout<<"Enter element "<<i+1<<": ";
        cin>>nums[i];
    }

    map<int, int> my_map;

    for (int i = 0; i < size; i++) {
            int x = target - nums[i];
            if (my_map.find(x) != my_map.end()) {
                cout << "Pair found: (" << my_map.at(x) << ", " << i << ")" << endl;
                return (my_map.at(x), i);
            } 
            else {
                my_map[nums[i]] = i;

                // for (auto it: my_map) {
                //     cout<<it.first<< " -> "<<it.second<<endl;
                // }
            }
        }
        return 0;
}