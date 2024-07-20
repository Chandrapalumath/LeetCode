class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        vector<vector<int>>ans(rowSum.size());
        for(int i=0;i<rowSum.size();i++){
            for(int j=0;j<colSum.size();j++){
                int sum=min(rowSum[i],colSum[j]);
                rowSum[i]-=sum;colSum[j]-=sum;
                ans[i].push_back(sum);
            }
        }
        return ans;
    }
};