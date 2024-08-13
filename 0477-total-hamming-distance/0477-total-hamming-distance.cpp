class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                int ans=nums[i]^nums[j];
                sum+=__builtin_popcount(ans);
            }
        }
        return sum;
    }
};