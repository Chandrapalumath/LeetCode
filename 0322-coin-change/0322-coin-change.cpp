class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int ind=coins.size()-1;
        vector<vector<int>>dp(ind+1,vector<int>(amount+1,-1));
        int ans= recur(coins,amount,ind,dp);
        return ans==1e9?-1:ans;
    }
    int recur(vector<int>& coins, int amount, int ind, vector<vector<int>>&dp){
        if(ind==0){
            if(amount%coins[0]==0){ 
                dp[ind][amount]=amount/coins[0];
                return amount/coins[0];
            }
            dp[ind][amount]=1e9;
            return 1e9;
        }
        if(dp[ind][amount]!=-1) return dp[ind][amount];
        int pick=1e9;
        if(amount>=coins[ind]){
            pick = 1+ recur(coins,amount-coins[ind],ind,dp);
        }
        int nopick=recur(coins,amount,ind-1,dp);
        dp[ind][amount]=min(pick,nopick);
        return min(pick,nopick);
    }
};