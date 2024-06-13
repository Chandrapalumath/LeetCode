class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int a=0,b=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            a+=nums[i];
        }
        for(int i=0;i<n;i++){
            a-=nums[i];
            if(a==b){
                return i;
            }
            b+=nums[i];
        }
        return -1;
    }
};