class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>pre;
        vector<int>post(n);
        int a=1;
        for(int i=0;i<n;i++){
            a=a*nums[i];
            pre.push_back(a);
        }
        a=1;
        for(int i=n-1;i>=0;i--){
            a=a*nums[i];
            post[i]=a;
        }
        nums[0]=post[1];
        nums[n-1]=pre[n-2];
        for(int i=1;i<n-1;i++){
            nums[i]=pre[i-1]*post[i+1];
        }
        return nums;
    }
};