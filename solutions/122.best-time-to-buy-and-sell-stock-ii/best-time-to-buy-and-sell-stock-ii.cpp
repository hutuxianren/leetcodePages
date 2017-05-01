class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int totolProfit=0;
        for(int i=0;i<n-1;i++)
        {
            if(prices[i+1]>prices[i]) totolProfit+=prices[i+1]-prices[i];
        }
        return totolProfit;
    }
};