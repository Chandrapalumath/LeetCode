class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        vector<bool>ans;
        int id=0;
        vector<int>parity={id};
        for(int i=1;i<nums.size();i++){
            if(nums[i]%2==nums[i-1]%2) ++id;
            parity.push_back(id);
        }
        for(const vector<int>query:queries){
            int from=query[0];
            int to=query[1];
            ans.push_back(parity[from]==parity[to]);
        }
        return ans;
    }
};