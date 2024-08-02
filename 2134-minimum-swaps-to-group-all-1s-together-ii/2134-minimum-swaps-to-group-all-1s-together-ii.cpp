class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int k=accumulate(nums.begin(),nums.end(),0);
        cout<<k<<" ";
        int cnt=accumulate(nums.begin(),nums.begin()+k,0);
        cout<<cnt<<" ";
        int mx=cnt;
        for(int i=k;i<nums.size()+k;i++){
            cnt+=nums[i%nums.size()]-nums[(i-k+nums.size())%nums.size()];
            mx=max(mx,cnt);
        }
        return k-mx;
    }
};