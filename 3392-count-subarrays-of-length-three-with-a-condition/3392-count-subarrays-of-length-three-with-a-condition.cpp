class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int count=0;
        for(int i=1;i<nums.size()-1;i++) if(nums[i]==(nums[i-1]+nums[i+1])*2) count++;
        return count;
    }
};