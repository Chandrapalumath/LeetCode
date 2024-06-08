class Solution {
public:
    int findMin(vector<int>& arr) {
        int e=arr.size()-1;
        if(e==0 || arr[e]>arr[0]){
            return arr[0];
        }
        int s=0;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid]<arr[mid+1] && arr[mid]<arr[mid-1]){
                return arr[mid];
            }
            if(arr[mid]>arr[mid+1]){
                return arr[mid+1];
            }
            if(arr[s]<arr[mid]){
                s=mid+1;
            }else{
                e=mid-1;
            }
        }
        return -1;
    }
    
};