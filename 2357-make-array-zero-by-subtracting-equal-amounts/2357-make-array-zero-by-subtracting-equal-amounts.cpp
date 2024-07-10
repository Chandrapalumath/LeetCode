class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0]?1:0;
        }
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++) maxi=max(maxi,nums[i]);
        if(maxi==0) return 0;
        vector<bool>arr(maxi,false);
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(!arr[nums[i]] && nums[i]!=0){
                ans++;
                arr[nums[i]]=true;
            }
        }
        return ans;
    }
};