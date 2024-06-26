class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>nums;
        for(int i=0;i<=n;i++){
            nums.push_back( __builtin_popcount(i));
        }
        return nums;
    }
};