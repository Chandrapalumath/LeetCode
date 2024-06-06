class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size();
        int a=INT_MAX;
        int b=INT_MAX;
        int c=INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]<=a){
                a=nums[i];
            }else if(nums[i]<=b && a<nums[i]){
                b=nums[i];
            }else if(nums[i]<=c && b<nums[i]){
                return true;
            }
        }
        return false;
    }
};