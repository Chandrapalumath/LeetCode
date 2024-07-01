class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        if(nums.size()<2) return {};
        vector<int>ans;
        for(int i : nums){
            int index=abs(i);
            if(nums[index-1]>0){
                nums[index-1] *=-1;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) ans.push_back(i+1);
        }
        return ans;
    }
};