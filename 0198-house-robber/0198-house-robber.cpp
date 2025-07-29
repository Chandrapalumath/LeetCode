class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1);
        dp[0]=0;
        dp[1]=nums[0];
        for(int i=2;i<n+1;i++){
            int pick = nums[i-1]+ dp[i-2]; //recur(nums,n-2,dp);
            int nopick = dp[i-1]; //recur(nums,n-1,dp);
            dp[i] = max(pick,nopick);
        }
        return dp[n];
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
/*
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
*/

// DP -> Tabulation
/*

*/