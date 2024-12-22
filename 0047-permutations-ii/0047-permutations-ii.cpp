class Solution {
public:
    set<vector<int>>ans1;
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        inorder(nums,vector<bool>(nums.size()),{});
        for(auto a:ans1) ans.push_back(a);
        return ans;
    }
    void inorder(vector<int>&nums,vector<bool>&& vis,vector<int>&& way){
        if(way.size()==nums.size()){
            ans1.insert(way);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(vis[i]) continue;
            vis[i]=true;
            way.push_back(nums[i]);
            inorder(nums,std::move(vis),std::move(way));
            way.pop_back();
            vis[i]=false;
        }
    }
};