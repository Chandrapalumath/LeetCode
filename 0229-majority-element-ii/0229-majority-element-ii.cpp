class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        if(nums.size()==1) return nums;
        int n=nums.size()/3;
        cout<<n;
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int c=0;
        for(int i=0;i<nums.size()-1;i++){
            if(c==n) {ans.push_back(nums[i]); }
            if(nums[i]==nums[i+1]){
                c++; 
            }else{
                c=0;
            }
        }
        if(c==n) ans.push_back(nums[nums.size()-1]);
        return ans;
    }
};