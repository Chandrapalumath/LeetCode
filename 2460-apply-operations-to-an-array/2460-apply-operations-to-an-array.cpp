class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        //lets just solve the problem in two steps 1.applying operations 2.moving zero
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                nums[i]*=2;
                nums[i+1]=0;
            }
        }
        vector<int>ans(nums.size(),0);
        int z=0;
        for(int i=0;i<nums.size();i++)
            if(nums[i]!=0) {ans[z]=nums[i];z++;}
        //for(int i=0;i<z;i++) ans.push_back(0);
        return ans;
    }
};