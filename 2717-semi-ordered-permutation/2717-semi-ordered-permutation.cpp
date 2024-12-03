class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        //From hint we can extract a formula in terms of x and y
        int x,y;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1) x=i;
            else if(nums[i]==nums.size()) y=i;
        }
        if(x<y) return x+(nums.size()-y-1);
        return x+(nums.size()-y-1)-1;
    }
};