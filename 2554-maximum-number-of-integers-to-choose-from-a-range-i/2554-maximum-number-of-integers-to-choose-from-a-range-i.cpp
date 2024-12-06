class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        int c=0,ans=0;
        vector<int>arr(n+1,0);
        for(int i:banned){
            if(i<=n) arr[i]=1;
        }
        for(int i=1;i<=n;i++){
            if(arr[i]==0){
                if(ans+i>maxSum) return c;
                else ans+=i;
                c++;
            }
        }
        return c;
    }
};