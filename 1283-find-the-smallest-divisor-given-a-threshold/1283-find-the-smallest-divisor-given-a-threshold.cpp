class Solution {
public:
    int factor(vector<int>& nums,int n){
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=ceil(double(nums[i])/double(n));
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int s=1;
        int e=1000000;
        int ans;
        while(s<e){
            int mid=s+(e-s)/2;
            ans=factor(nums,mid);
            if(ans>threshold) s=mid+1;
            else e=mid;
        }
        return s;
    }
};