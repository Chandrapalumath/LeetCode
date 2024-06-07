class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        //Why dont we write binary search foa all  of them seperately
        int n=nums.size();
        int l=0;
        int r=n-1;
        int mid;
        int index1=-1;
        int index2=-1;
        //First Occrence
        while(l<=r){
            mid=l+(r-l)/2;
            if(nums[mid]==target){
                index1=mid;
                r=mid-1;
            }
            else if(nums[mid]>target){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        if(index1==-1){
            return {-1,-1};
        }
        for(int i=index1;i<n;i++){
            if(nums[i]==target){
                index2=i;
            }else{
                break;
            }
        }
        return {index1,index2};
    }
};