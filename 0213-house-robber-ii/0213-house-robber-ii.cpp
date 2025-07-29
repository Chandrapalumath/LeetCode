class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];
        if (n == 2) return max(nums[0], nums[1]);
        vector<int> temp1(nums.begin(), nums.end() - 1);
        vector<int> temp2(nums.begin() + 1, nums.end());
        int a = rob1(temp1);
        int b = rob1(temp2);
        return max(a, b);
    }
    int rob1(vector<int>& nums) {
        int n=nums.size();
        int prev1=0;
        int prev2=nums[0];
        for(int i=2;i<n+1;i++){
            int pick = nums[i-1]+ prev1; //recur(nums,n-2,dp);
            int nopick = prev2; //recur(nums,n-1,dp);
            prev1=prev2;
            prev2 = max(pick,nopick);
        }
        return prev2;
    }
};
