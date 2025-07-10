class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int a=-1;
            int j=i+1;
            int k=0;
            for(;k<n-1;j++,k++){
                if(nums[i]<nums[j%n]){
                    a=nums[j%n];
                    break;
                }
            }
            ans.push_back(a);
        }
        return ans;
    }
};