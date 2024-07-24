class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>arr;
        int j=1;
        int p=1;
        arr.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1] && p<2){
                arr.push_back(nums[i]);
                p++;j++;
            }else if(nums[i]!=nums[i-1]){
                arr.push_back(nums[i]);
                j++;
                p=1;
            }
        }
        p=0;
        for(auto a: arr){
            nums[p]=a;
            p++;
        }
        return j;
    }
};