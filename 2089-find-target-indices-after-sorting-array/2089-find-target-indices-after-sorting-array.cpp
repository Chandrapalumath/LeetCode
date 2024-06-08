class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int a=0,b=0;
        //here a=number smaller than the target and b=number equal to target
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<target){
                a++;
            }
            if(nums[i]==target){
                b++;
            }
        }
        vector<int>c;
        for(int i=0;i<b;i++){
            c.push_back(a+i);
        }
        return c;
    }
};