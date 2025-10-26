class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sum = 0;
        int m = INT_MIN;
        // for(int i = 0;i<prices.size();++i)
        // {
        //     sum = 0;
        //     for(int j = i+1;j<prices.size();++j)
        //     {
        //         sum = prices[j] - prices[i];
        //         if(sum>m){m = sum;}
        //         else{m = m;}
        //     }
        // }
        // if(m<0){return 0;}
        // else return m;

        int buying_price = prices[0],max_profit=0,curr_profit,n=prices.size();
        for(int i=0;i<n;++i)
        {
            curr_profit = prices[i]-buying_price;
            if(curr_profit >max_profit) max_profit = curr_profit;
            if(prices[i]<buying_price) buying_price = prices[i];
        }
        if(max_profit == 0) return 0;
        else return max_profit;
        
    }
};