class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> set;
    
        for(int i=0;i<nums.size();i++){
             set.insert(nums[i]);
        }
        if(set.size() < nums.size()){
            return true;
        }
        return false;
    }
};