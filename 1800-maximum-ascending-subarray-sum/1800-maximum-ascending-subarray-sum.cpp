class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n=nums.size();
        int cur=nums[0];
        int max=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i-1]<nums[i]){
                cur+=nums[i];
            }else{
                if(cur>max){
                    max=cur;
                }
                cur=0;
                cur+=nums[i];
            }
        }
        if(cur>max){
                    max=cur;
                }
        return max;
    }
};