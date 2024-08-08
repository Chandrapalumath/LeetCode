class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>>ans;
        ans.push_back({rStart,cStart});
        int s=rows*cols;
        if(s==1) return ans;
        int i=1;
        while(1){
            vector<vector<int>>distance={{0,1,i},{1,0,i},{0,-1,i+1},{-1,0,i+1}};
            for(auto a:distance){
                int p=a[0],q=a[1],r=a[2];
                while(r-->0){
                    rStart+=p;
                    cStart+=q;
                    if(rStart>=0 && rStart<rows && cStart>=0 && cStart<cols){
                        ans.push_back({rStart,cStart});
                        if(ans.size()==s) return ans;
                    }
                }
            }
            i+=2;
        }
    }
};