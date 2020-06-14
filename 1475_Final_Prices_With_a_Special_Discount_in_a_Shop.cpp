class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) 
    {
        int temp;
        for(int i=0; i<prices.size(); i++)
        {
            temp = INT_MAX;
            for(int j=i+1; j<prices.size(); j++)
            {
                temp = prices[j];
                if(temp<=prices[i])
                {
                    prices[i] = prices[i]-prices[j];
                    break;                        
                }
            }
        }
        
        return prices;
    }
};
