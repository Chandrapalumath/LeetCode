class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //First Approach is to sort it
        
        int n=nums.size();
        sort(nums.begin(),nums.end());
        return nums[n-k];
        
    }
};