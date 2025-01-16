class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int ans=0,a=0;
        if(nums1.size()%2!=0) for(int n:nums2) a^=n;
        if(nums2.size()%2!=0) for(int n:nums1) ans^=n;
        return a^ans;
    }
};