class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        if(grid.size()<3 && grid[0].size()<3) return 0;
        int ans=0,a=0;
        for(int i=0;i<grid.size()-2;i++){
            for(int j=0;j<grid[0].size()-2;j++){
                bool w=false;
                if(grid[i+1][j+1]!=5 || grid[i][j]==5) continue;
                if(grid[i][j]+grid[i+2][j+2]!=10 || grid[i+2][j]+grid[i][j+2]!=10 || grid[i][j+1]+grid[i+2][j+1]!=10 || grid[i+1][j]+grid[i+1][j+2]!=10) continue;
                if(grid[i][j]+grid[i][j+1]+grid[i][j+2] !=15 || grid[i][j]+grid[i+1][j]+grid[i+2][j] !=15) continue;
                for(int p=0;p<3;p++){
                    for(int q=0;q<3;q++){
                        if(grid[i+p][j+q]>9 || grid[i+p][j+q]<0){ w=true; break;}
                    }
                }
                if(w) continue;
                ans++;
            }
        }
        return ans;
    }
};