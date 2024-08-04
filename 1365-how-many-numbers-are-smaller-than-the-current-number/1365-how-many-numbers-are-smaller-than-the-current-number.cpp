class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>count(101,0);
        for(int a : nums) count[a]++;
        for(int i=1;i<101;i++) count[i]+=count[i-1];
        for(int i=0;i<nums.size();i++)  if(nums[i]!=0){ nums[i]=count[nums[i]-1];}
        return nums;
    }
};