class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0,mini=INT_MAX;
        int j=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
            while(sum>=target){
                mini=min(mini,i-j+1);
                sum-=nums[j];
                j++;
            }
        }
        return mini==INT_MAX?0:mini;
    }
};