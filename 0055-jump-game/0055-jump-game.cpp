class Solution {
public:
    bool canJump(vector<int>& nums) {
        int ans=0;
        for(int i=0;ans<nums.size() && ans<=i;ans++){
            i=max(i,ans+nums[ans]);
        }
        return ans==nums.size();
    }
};