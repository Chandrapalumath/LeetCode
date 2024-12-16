class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for(int i=0;i<k;i++){
            int maxi=10000,index=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]<maxi){
                    maxi=nums[j];
                    index=j;
                }
            }
            nums[index]*=multiplier;
            cout<<index<<endl;
        }
        return nums;
    }
};