class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int a : nums){
            if(mp.find(a)==mp.end()) mp[a]=1;
            else mp[a]++;
        }
        for(auto a : mp){
            if(a.second%2 !=0) return false;
        }
        return true;
    }
};