class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int s;
        int l=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                s=nums[l];
                nums[l]= nums[i];
                nums[i]=s;
                l++;
            }
        }
    }
};