class Solution {
public:
    int is(vector<int>& nums,int i,int j){
        return (nums[i])==abs(nums[j]) || abs(nums[i])==(nums[j]);
    }
    int isminus(vector<int>& nums,int i,int j){
        if((nums[i]<0 && nums[j]>0)||(nums[j]<0 && nums[i]>0)){
            return 1;
        }else{
            return 0;
        }
    }
    int findMaxK(vector<int>& nums) {
        int max=-1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(is(nums,i,j) && isminus(nums,i,j)){
                    if((abs(nums[i])>max)){
                        max=abs(nums[i]);
                    }
                }
            }
        }
        return max;
    }
};