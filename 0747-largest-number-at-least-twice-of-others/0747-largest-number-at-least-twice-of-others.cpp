class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int fmax=INT_MIN;
        int smax=INT_MIN;
        int maxi=-1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>fmax){
                smax=fmax;
                fmax=nums[i];
                maxi=i;
            }else if(nums[i]>smax){
                smax=nums[i];
            }
        }
        if(smax*2<=fmax){
            return maxi;
        }
        return -1;
    }
};