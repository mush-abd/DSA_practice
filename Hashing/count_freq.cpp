#include<bits/stdc++.h>
using namespace std;

int use_arr(int arr[], int n) {
    // precompute frequency
    int hash[13] = {0};
    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }
    cout<<"Enter the number of queries: ";

    int q;
    cin >> q;
    while (q--) {

        cout << "Enter the number to query: ";
        int number;
        cin >> number;
        //fetch
        cout << "Frequency of " << number << ": ";
        cout << hash[number] << endl;
    }
    return 0;
}

int use_hash(int arr[], int n) {
    // Using map to store the values
    map<int, int> my_hash;
    for (int i = 0; i < n; i++) {
        my_hash[arr[i]]++;
    }

    cout<<"The hash map is ";
    for(auto it: my_hash) {
        cout << it.first << " -> " << it.second << endl;
    }

    cout << "Enter the number of queries: ";
    int q;
    cin >> q;
    while (q--) {
        cout << "Enter the number to query: ";
        int number;
        cin >> number;
        //fetch
        cout << "Frequency of " << number << ": ";
        cout << my_hash[number] << endl;
    }
    return 0;
}
int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout<<"The array is: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout<<"array or map (1, 2)?";
    int choice;
    cin >> choice;
    if (choice == 1) {
        use_arr(arr, n);
    } else {
        use_hash(arr, n);
    }

    // queries


    return 0;
    
}