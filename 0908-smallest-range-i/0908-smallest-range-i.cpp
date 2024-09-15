class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int mini=INT_MAX,maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<mini) mini=nums[i];
            if(nums[i]>maxi) maxi=nums[i];
        }
        int ans=maxi-k-(mini+k);
        if(ans<0) return 0;
        return ans;
    }
};