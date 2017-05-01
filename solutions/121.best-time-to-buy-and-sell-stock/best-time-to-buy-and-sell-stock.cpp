
class Solution {
public:
    int maxProfit(vector<int>& prices) {
//     int maxProfit=0;
//     int sum=0;
// for(int i=0;i<prices.size()-1;i++)
// {
//     sum+=prices[i+1]-prices[i];
//     maxProfit=max(sum,maxProfit);
//     sum=max(sum,0);
// }
// return maxProfit;
            int maxProfit=0;
    int sum=0;
    int length=prices.size();
    for(int i=0;i<length-1;i++)
    {
        sum+=prices[i+1]-prices[i];
        maxProfit=max(sum,maxProfit);
        sum=max(sum,0);
    }
    return maxProfit;
    }
};