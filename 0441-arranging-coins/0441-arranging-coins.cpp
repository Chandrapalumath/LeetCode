class Solution {
public:
    int arrangeCoins(int n) {
        int ans=0;
        int s=n;
        for(int i=1;i<=n;i++){
            if(s>=i) s-=i;
            else return ans;
            ans++;
        }
        return ans;
    }
};