class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        inorder(nums,vector<bool>(nums.size()),{},ans);
        return ans;
    }
    void inorder(vector<int>&nums,vector<bool>&& vis,vector<int>&& way,vector<vector<int>>&ans){
        if(way.size()==nums.size()){
            ans.push_back(way);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(vis[i]) continue;
            vis[i]=true;
            way.push_back(nums[i]);
            inorder(nums,std::move(vis),std::move(way),ans);
            way.pop_back();
            vis[i]=false;
        }
    }
};