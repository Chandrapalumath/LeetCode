class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int n:nums){
            if(mpp.find(n)==mpp.end()) mpp[n]=1;
            else mpp[n]++;
        }
        int ans=0;
        for(auto n:mpp){
            if(n.second==2) ans^=n.first;
        }
        return ans;
    }
};