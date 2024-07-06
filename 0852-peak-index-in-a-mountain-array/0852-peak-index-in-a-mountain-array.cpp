class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l=0,p=0,r=arr.size()-1,m;
        while(l<r){
            m=l+r>>1;
            if(arr[m]<arr[m+1]) p=l=m+1;
            else r=m;
        }
        return p;
    }
};