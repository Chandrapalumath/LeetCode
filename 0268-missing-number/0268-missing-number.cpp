class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans1=0,ans2=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            ans1+=nums[i];
        }
        ans2=(n*(n+1))/2;
        return(ans2-ans1);
    }
};