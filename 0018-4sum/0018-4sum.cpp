class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            long long p=target-nums[i];
            for(int j=i+1;j<nums.size();j++){
                long long d=p-nums[j];
                int left=j+1;
                int right=nums.size()-1;
                while(left<right){
                    int sum=nums[left]+nums[right];
                    if(sum==d){
                        ans.push_back({nums[i],nums[j],nums[left],nums[right]});
                        int a=nums[left];
                        int b=nums[right];
                        while(left<right && nums[left]==a) left++;
                        while(left<right && nums[right]==b) right--;
                    }
                    else if(sum>d) right--;
                    else left++;
                }
                while(j+1<nums.size() && nums[j+1]==nums[j]) j++;
            }
            while(i+1<nums.size() && nums[i+1]==nums[i]) i++;
        }
        return ans;
        
    }
};