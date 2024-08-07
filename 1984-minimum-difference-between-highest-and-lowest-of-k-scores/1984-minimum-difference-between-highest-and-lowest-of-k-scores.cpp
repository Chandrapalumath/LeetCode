class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int mini=INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-k+1;i++){
            mini=min(mini,nums[i+k-1]-nums[i]);
        }
        return mini;
    }
};