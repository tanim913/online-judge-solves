class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int least = INT_MAX;
        int temp_profit = 0;
        int ult_profit = 0;

        for(int i =0; i<prices.size(); i++)
        {
            least = min(least, prices[i]);
            temp_profit = prices[i] - least;
            ult_profit = max(ult_profit, temp_profit);
        }

        return ult_profit;
    }

};
