class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int n=nums.size();
        while(1){
            int count=0;
            for(int i=0;i<n;i++){
                if(nums[i]==original){
                    count++;
                }
                if(count==1){
                    original*=2;
                    i=-1;
                    count=0;
                }
            }
            if(count==0){
                return original;
            }
        }
        
    }
};