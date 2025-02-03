class Solution {
public:
    bool check(vector<int>& nums) {
        int cp=0;
        for(int i=0;i<nums.size();i++) if(nums[i]>nums[(i+1)%nums.size()] && ++cp>1) return false;
        return true;
    }
};