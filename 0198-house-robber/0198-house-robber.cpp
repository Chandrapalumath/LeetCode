class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size()-1;
        vector<int>dp(n+1,-1);
        return recur(nums,n,dp);
    }
    int recur(vector<int>& nums, int n, vector<int>& dp){
        if(n<0){
            return 0;
        }
        if(dp[n]!=-1) return dp[n];
        int pick = nums[n]+recur(nums,n-2,dp);
        int nopick = recur(nums,n-1,dp);
        dp[n] = max(pick,nopick);
        return max(pick,nopick);
    }
};

// Normal Recursion Code 
/*
class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size()-1;
        return recur(nums,n);
    }
    int recur(vector<int>& nums, int n){
        if(n<0){
            return 0;
        }
        int pick = nums[n]+recur(nums,n-2);
        int nopick = recur(nums,n-1);
        return max(pick,nopick);
    }
};
*/

// DP -> Memoization
/**/