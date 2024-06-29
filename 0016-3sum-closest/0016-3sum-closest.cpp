class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size()-1;
        int ans=0;
        int md=INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int left=i+1;
            int right=n;
            while(left<right){
                int sum=nums[i]+nums[left]+nums[right];
                if(sum==target){
                    return target;
                }
                if(abs(target-sum)<md){
                    md=abs(target-sum);
                    ans=sum;
                }
                if(sum<target){
                    left++;
                }else {
                    right--;
                }
            }
        }
        return ans;
    }
};