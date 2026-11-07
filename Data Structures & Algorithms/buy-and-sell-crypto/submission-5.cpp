class Solution {
public:
    int maxProfit(vector<int>& prices) {
        const int N = prices.size();
        auto max = 0;
        

        for(int i = 0; i < N;i++)
        {
            for(int j = i+1;j<N;j++)
            {
                if(prices[j] > prices[i])
                {
                    if(((prices[j] - prices[i])) > max)
                    {
                        max = ((prices[j] - prices[i]));
                    }
                }
                else
                {
                    i=j-1;
                    break;
                }
            }
        }

        return (max);
        
    }
};
