class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int a=nums[i];
            a=abs(a);
            if(nums[a]>0){
                nums[a]=-nums[a];
            }else{
                return a;
            }
        }
        return -1;   
    }
};