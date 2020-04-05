class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int profit=0,i=0,sz=prices.size(),buy=1,sell=0,buyprice=0,sellprice=0;
        
        while(i<sz){
            
            if(buy){
                
                if(i+1 < sz && prices[i+1]<prices[i])
                    i++;
                else{
                     buyprice=prices[i];
                     buy=0; sell=1; // Time to sell
                     i++;
                }
            }
            else{
                
                if(i+1 < sz && prices[i+1] > prices[i])
                    i++;
                else{
                    sellprice = prices[i];
                    profit += sellprice-buyprice;
                    buy=1; sell=0; // Time to buy
                    i++;
                }
            }
        }
        
        return profit;
        
    }
};