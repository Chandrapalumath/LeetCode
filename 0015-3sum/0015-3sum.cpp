class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size()-1;
        if(n<2) return{{}};
        sort(nums.begin(),nums.end());
        set<vector<int>>a;
        for(int i=0;i<n;i++){
            int left=i+1;
            int right=n;
            while(left<right){
                int sum=nums[i]+nums[left]+nums[right];
                if(sum==0){
                    a.insert({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                }
                else if(sum>0){
                    right--;
                }else{
                    left++;
                }
            }
        }
        vector<vector<int>>s;
        for(auto p : a){
            s.push_back(p);
        }
        return s;
        
    }
};