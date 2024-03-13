class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0;
        int buy=0;
        int sell=0;
        int profit=0;
        for(i=0;i<prices.size();i++)
        {
            if(prices[buy]>prices[i])
            {
                buy=i;
                sell=i;
            }
            if(prices[sell]<prices[i])
            {
                sell=i;
            }
            if(profit<prices[sell]-prices[buy])
            {
                profit=prices[sell]-prices[buy];
            }
        }
        if(profit<=0)
        {
            return 0;
        }
        return profit;
    }
};