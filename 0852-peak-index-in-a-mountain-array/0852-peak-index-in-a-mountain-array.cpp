class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l=0,p=0,m;
        int r=arr.size()-1;
        while(l<r){
            m=l+(r-l)/2;
            if(arr[m]<arr[m+1]) p=l=m+1;
            else r=m;
        }
        return p;
    }
};