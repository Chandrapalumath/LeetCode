class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        if(nums.size()<2) return{};
        vector<int>ans;
        for(int i : nums){
            int index=abs(i);
            nums[index-1] *=-1;
            if(nums[index-1]>0) ans.push_back(index);
        }
        return ans;
    }
};