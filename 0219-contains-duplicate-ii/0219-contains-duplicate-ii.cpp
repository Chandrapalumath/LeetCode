class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int>ans;
        for(int i=0;i<nums.size();i++){
            if(!ans.insert(nums[i]).second) return true;
            if(i>=k) ans.erase(nums[i-k]);
        }
        return false;
    }
};