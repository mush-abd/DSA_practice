#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int mini = prices[0];
        int maxP = 0;
        int buyday = -1;
        int sellday = -1;
        for (int i = 1; i < size(prices); i++) {
            int profit = prices[i] - mini;
            if (profit > maxP) {
                maxP = profit;
                sellday = i;
            }
            if (prices[i] < mini) {
                mini = prices[i];
                buyday = i;
            }
        }

        cout << "Buy on day: " << buyday + 1 << ", Sell on day: " << sellday + 1 << endl;
        return maxP;
    }
};

int main() {

    Solution sol;
    vector<int> prices = {7,1,5,3,6,4};

    cout << "Given stock prices are: ";
    for (int i = 0; i < size(prices); i++) {
        cout << prices[i] << " ";
    }
    
    cout << endl;

    int maxProfit = sol.maxProfit(prices);
    cout << "Maximum profit from buying and selling the stock is: " << maxProfit << endl;

    return 0;   
}