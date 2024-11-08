class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int max=(1<<maximumBit)-1;
        vector<int>ans;
        int a=0;
        for(auto n:nums){
            a^=n;
            ans.push_back(a^max);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};