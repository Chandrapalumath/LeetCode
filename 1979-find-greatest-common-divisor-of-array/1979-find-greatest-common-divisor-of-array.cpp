class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int a:nums){
            mini=min(mini,a);
            maxi=max(maxi,a);
        }
        return __gcd(mini,maxi);
    }
};