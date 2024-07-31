class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n,vector<int>(n));
        int l=0,t=0,b=n-1,r=n-1;
        int c=1;
        while(l<=r && t<=b){
            for(int i=l;i<=r;i++) ans[t][i]=c++;
            t++;
            for(int i=t;i<=b;i++) ans[i][r]=c++;;
            r--;
            if(t<=b){
                for(int i=r;i>=l;i--) ans[b][i]=c++;
                b--;
            }
            if(l<=r){
                for(int i=b;i>=t;i--) ans[i][l]=c++;
                l++;
            }
        }
        return ans;
    }
};