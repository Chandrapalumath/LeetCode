class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int p=n/2;
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(nums[i]==nums[j]){
                    count++;
                    if(count>p){
                        return nums[i];
                    }
                }
            }
        }
        return -1;
    }
};