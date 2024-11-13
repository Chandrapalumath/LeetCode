class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int m=100,ans=0;
        vector<int>count(101);
        for(int n:nums) count[n]++;
        for(int i=k+1;i<=m;i++) ans+=count[i]*count[i-k];
        return ans;
    }
};