class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=INT_MIN,high=0;
        for(int w:weights){
            low=max(low,w);
            high+=w;
        }
        while(low<=high){
            int mid=(low+high)/2;
            int d=0;
            int l=0;
            for(int w:weights){
                if(l+w>mid){d+=1;l=w;}
                else l+=w;
            }
            if(d>=days) low=mid+1;
            else high=mid-1;
        }
        return low;
    }
};