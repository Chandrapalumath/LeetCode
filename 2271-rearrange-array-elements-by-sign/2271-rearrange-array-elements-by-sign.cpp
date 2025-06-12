class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans(nums.size());
        int p=0,n=1;
        for(int a:nums){
            if(a>=0){
                ans[p]=a; p+=2;
            }else{
                ans[n]=a; n+=2;
            }
        }
        return ans;
    }
};