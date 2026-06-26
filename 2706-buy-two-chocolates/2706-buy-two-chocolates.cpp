class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int sum;
        int minSum = INT_MAX;
        // int amount;

        for(int i = 0; i<prices.size(); i++){
            sum = 0;
        for(int j = i + 1; j< prices.size(); j++){
            sum = prices[i] + prices[j];

            if(sum <= money){
                minSum = min(minSum, sum);
            }
        }
        }
        if(minSum == INT_MAX)
            return money;
        else
            return money - minSum;
    }
};