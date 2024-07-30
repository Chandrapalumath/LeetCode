class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>>ans(matrix.size(),vector<int>(matrix[0].size(),1));
        int m=matrix[0].size();
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    int r=0,c=0;
                    while(r<matrix.size()){
                        ans[r][j]=0; 
                        r++;
                    }
                    while(c<m){
                        ans[i][c]=0;
                        c++;
                    }
                }
            }
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(ans[i][j]==0) matrix[i][j]=0;
            }
        }
    }
};