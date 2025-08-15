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
            if (my_map.contains(x)) {
                cout << "Pair found: (" << my_map.at(x) << ", " << i << ")" << endl;
                cin.ignore();
                cin.get();
                return (my_map.at(x), i);
            } 
            else {
                my_map[nums[i]] = i;

                // for (auto it: my_map) {
                //     cout<<it.first<< " -> "<<it.second<<endl;
                // }
            }
        }
        cout << "No pair found." << endl;
        cin.ignore();
        cin.get(); // Wait for Enter key before exit
        return 0;
}