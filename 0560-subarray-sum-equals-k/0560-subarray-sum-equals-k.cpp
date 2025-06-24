class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int s=0,c=0;
        map<int,int>mp;
        mp[0]=1;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
            int r=s-k;
            c+=mp[r];
            mp[s]+=1;
        }
        return c;
    }
};