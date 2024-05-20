class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            //here we use the concept of bit manipulation
            //we XOR opeartion for this
            ans ^=nums[i];
        }
        return ans;
    }
};