class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int>ans;
        for(int i=0;i<n;i++){
            long long sum=0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                ans.push_back(sum);
            }
        }
        sort(ans.begin(),ans.end());
        int sum=0;
        int mod=1e9+7;
        for(int i=left-1;i<right;i++){
            sum=(sum+ans[i])%mod;
        }
        
        return sum%mod;
    }
};