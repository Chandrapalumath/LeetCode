class Solution {
public:
    void merge_array(int low,int mid1,int mid2,int high,vector<int>& nums){
        int left=low;
        int right=mid2;
        vector<int>ans;
        while(left<=mid1 && right<=high){
            if(nums[left]<=nums[right]) {ans.push_back(nums[left]); left++;}
            else {ans.push_back(nums[right]); right++;}
        }
        while(left<=mid1){ans.push_back(nums[left]); left++;}
        while(right<=high){ans.push_back(nums[right]); right++;}
        for(int i=low,j=0;i<=high;i++,j++){
            nums[i]=ans[j];
        }
    }
    void merge_sort(int low,int high,vector<int>& nums){
        if(low<high){
            int mid=low+(high-low)/2;
            merge_sort(low,mid,nums);
            merge_sort(mid+1,high,nums);
            merge_array(low,mid,mid+1,high,nums);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        merge_sort(0,n-1,nums);
        return nums;
    }
};