class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int fmax=INT_MIN;
        int smax=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>=fmax){
                smax=fmax;
                fmax=nums[i];
            }else if(nums[i]>smax){
            smax=nums[i];
            }
        }
        
        //cout<<smax<<" "<<fmax;
        return((smax-1)*(fmax-1));
    }
};