class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if(rowIndex==0) return {1};
        if(rowIndex==1) return {1,1};
        vector<vector<int>>ans(rowIndex+1);
        ans[0].push_back(1);
        ans[1].push_back(1);
        ans[1].push_back(1);
        for(int i=2;i<=rowIndex;i++){
            for(int j=0;j<=i;j++){
                if(j==i || j==0) ans[i].push_back(1);
                else{
                    ans[i].push_back(ans[i-1][j]+ans[i-1][j-1]);
                }
            }
        }
        return ans[rowIndex];        
    }
};