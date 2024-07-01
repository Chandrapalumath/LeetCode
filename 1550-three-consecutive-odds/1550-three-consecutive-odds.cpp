class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& nums) {
        if(nums.size()<2 ) return false;
        int i=0,j=1,k=2;
        while(k<nums.size()){
            if(nums[i]%2==1 && nums[j]%2==1 && nums[k]%2==1) return true;
            i++;j++;k++;
        }
        return false;
    }
};