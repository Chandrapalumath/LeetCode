class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n=grid.size()-1;
        int m=grid[0].size()-1;
        int count=0;
        for(int i=n;i>=0;i--){
            for(int j=m;j>=0;j--){
                if(grid[i][j] <0){
                    count++;
                }
                if(grid[i][j] >=0){
                    if(i==0){
                        break;
                    }else{
                        i--;
                    }
                    j=m+1;
                }
            }
        }
        return count;
    }
};