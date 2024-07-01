class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        bool have1 = false;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1) have1=true;
            if(nums[i]<=0) nums[i]=1;
            if(nums[i]>nums.size()) nums[i]=1;
        }
        if(have1==false) return 1;
        for(int i : nums){
            int index=abs(i);
            if(nums[index-1]>0){
                nums[index-1]*=-1;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                return i+1;
            }
        }
        return nums.size()+1;
    }
};