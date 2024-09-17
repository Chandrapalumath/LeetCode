class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++) if(mpp.find(nums[i])==mpp.end()) mpp[nums[i]]=1; else mpp[nums[i]]++;
        int ans=-1,cf=0;
        for(auto n:mpp){
            if(n.first%2==0 && cf<n.second) {ans=n.first;cf=n.second;}
            if(cf==n.second && n.first%2==0 && ans>n.first) ans=n.first;
        }
        if(ans!=-1) return ans;
        return -1;
    }
};