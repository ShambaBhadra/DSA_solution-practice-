#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0;
        int max_profit=0;
        for(int j=1;j<prices.size();j++){
            if(prices[j]>prices[i]){
                int profit=prices[j]-prices[i];
                max_profit=max(max_profit,profit);
            }
            else if(prices[j]<prices[i]){
                i=j;
            }
        }
        return max_profit;
    }
};