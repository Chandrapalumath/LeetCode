class Solution {
public:
    int minimumSubarrayLength(std::vector<int>& nums, int k) {
        int n=nums.size();
        if (nums[0]>=k) return 1;
        int res=INT_MAX;
        for(int i = 1;i<n;i++) {
            if(nums[i]>=k) return 1;
            for(int j = i - 1; j >= 0 && (nums[i] | nums[j]) != nums[j]; j--) {
                nums[j] |= nums[i];
                if (nums[j] >= k) {
                    res=min(res, i - j + 1);
                }
            }
        }
        return (res == INT_MAX) ? -1 : res;
    }
};
