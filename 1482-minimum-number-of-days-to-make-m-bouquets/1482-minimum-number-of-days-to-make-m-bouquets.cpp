class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long  q=m*1LL*k*1LL;
        if(q>bloomDay.size()) return -1;
        int low=INT_MAX,high=-1;
        for(int a : bloomDay){
            low=min(low,a);
            high=max(high,a);
        }
    
        while(low<=high){
            int mini=0;
            int mid=(low+high)/2;
            cout<<mid<<" ";
            int c=0;
            for(int a:bloomDay){
                if(a>mid){
                    mini+=c/k;
                    c=0;
                }else c++;
            }
            mini+=c/k;
            if(mini>=m){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};