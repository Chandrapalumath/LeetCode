class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        long long ans1=0;
        sort(nums.begin(),nums.end());
        int j=nums.size()-1;
        for(int i=0;i<j;i++){
            while(i<j && nums[i]+nums[j]>upper) j--;
            ans1+=j-i;
        }
        long long ans2=0;
        j=nums.size()-1;
        for(int i=0;i<j;i++){
            while(i<j && nums[i]+nums[j]>lower-1) j--;
            ans2+=j-i;
        }
        return ans1-ans2;
    }
};