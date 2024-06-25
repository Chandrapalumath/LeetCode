class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int nums[m+n];
        int i=0,k=0,j=0;
        while(i<m && j<n){
            if(nums1[i]==nums2[j]){
                nums[k]=nums1[i];
                i++;
            }else if(nums1[i]>nums2[j]){
                nums[k]=nums2[j];
                j++;
            }else{
                nums[k]=nums1[i];
                i++;
            }
            k++;
        }
        while(i!=m){
            nums[k]=nums1[i];
            i++;
            k++;
        }
        while(j!=n){
            nums[k]=nums2[j];
            j++;
            k++;
        }
        for(i=0;i<m+n;i++){
            nums1[i]=nums[i];
        }
    }
};