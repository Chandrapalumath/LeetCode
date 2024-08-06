class Solution {
public:
    int part(vector<int>& nums, int max){
        int p=1;
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            if(sum+nums[i]<=max){
                sum+=nums[i];
            }else{
                p++;
                sum=nums[i];
            }
        }
        return p;
    }
    int splitArray(vector<int>& nums, int k) {
        int low=INT_MIN,high=0;
        for(int n:nums){
            low=max(low,n);
            high+=n;
        }
        while(low<=high){
            int mid=(low+high)/2;
            int p=part(nums,mid);
            if(p>k) low=mid+1;
            else high=mid-1;
        }
        return low;
    }
};