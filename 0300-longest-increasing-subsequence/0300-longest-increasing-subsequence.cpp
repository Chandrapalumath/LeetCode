class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>arr(nums.size(),1);
        int maxlen=1;
        for(int i=1;i<nums.size();i++){
            for(int p=0;p<i;p++){
                if(nums[i]>nums[p]){
                    arr[i]=max(arr[i],1+arr[p]);
                }
            }
            if(arr[i]>maxlen) maxlen=arr[i];
        }

        return maxlen;
    }
};