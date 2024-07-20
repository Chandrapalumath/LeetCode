class Solution {
public:
    vector<vector<int>> reconstructMatrix(int upper, int lower, vector<int>& colsum) {
        int sum=0;
        int c=0;
        for(int n:colsum){ sum+=n;if(n==2)c++; }
        vector<vector<int>>ans(2);
        if(sum!=upper+lower || c>upper || c>lower) return {};
        for(int i=0;i<colsum.size();i++){
            if(colsum[i]==2){
                ans[1].push_back(1); lower--;
                ans[0].push_back(1); upper--;
            }else if(colsum[i]==0){
                ans[0].push_back(0);
                ans[1].push_back(0);
            }else{
                if(upper>=lower){
                    ans[0].push_back(1); upper--;
                    ans[1].push_back(0);
                }else{
                    ans[1].push_back(1); lower--;
                    ans[0].push_back(0);
                }
            }
        }
        return ans;
    }
};