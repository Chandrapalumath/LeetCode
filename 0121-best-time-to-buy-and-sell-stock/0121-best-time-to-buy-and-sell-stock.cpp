class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int b=prices[0],max=0;
        for(int i=1;i<n;i++) {
            if(b>prices[i])
                b=prices[i];
            else if(prices[i]-b>max)
                max =prices[i]-b;
        }
        return max;
    }
};