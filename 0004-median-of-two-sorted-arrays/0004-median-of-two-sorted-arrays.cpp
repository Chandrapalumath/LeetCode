class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int p1=0,p2=0;
        vector<int>arr;
        while(p1<n || p2<m){
            int a = p1<n ? nums1[p1] : INT_MAX;
            int b = p2<m ? nums2[p2] : INT_MAX;
            if(a>b){
                arr.push_back(b);
                p2++;
            }else{
                p1++;
                arr.push_back(a);
            }
        }
        int i=arr.size();
        if(i%2!=0){
            return (double)arr[i/2];
        }else{
            return (double)(arr[i/2]+arr[(i/2)-1])/2;
        }
    }
};