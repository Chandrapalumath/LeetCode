class Solution {
public:
    bool primeSubOperation(vector<int>& nums) {
        vector<int>ans;
        for(int i=2;i<=1000;i++){
            bool flag=true;
            for(int j:ans) if(i%j==0){
                flag=false;break;
            }
            if(flag) ans.push_back(i);
        }
        int n=nums.size();
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]) continue;
            int j=upper_bound(ans.begin(),ans.end(),nums[i]-nums[i+1])-ans.begin();
            if(j==ans.size() || ans[j]>=nums[i]) return false;
            nums[i]-=ans[j];
        }
        return true;
    }
};