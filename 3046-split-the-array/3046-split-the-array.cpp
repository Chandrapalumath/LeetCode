class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        map<int,int>mp;
        for(int a: nums){
            if(mp.find(a)==mp.end()) mp[a]=1;
            else mp[a]++;
        }
        for(int a: nums){
            if(mp[a]>2) return false;
        }
        return true;
    }
};