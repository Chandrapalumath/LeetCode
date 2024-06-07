class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
        int pos=0,nos=0;
        for(int i=0;i<n;i++){
            if(nums[i]>0) pos++;
            if(nums[i]<0) nos++;
        }
        return max(pos,nos);
    }
};