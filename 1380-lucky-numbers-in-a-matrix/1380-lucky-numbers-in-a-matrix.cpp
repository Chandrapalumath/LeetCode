class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int>mini;
        vector<int>maxi;
        vector<int>ans;
        for(int i=0;i<matrix.size();i++){
            int maxim=INT_MAX;
            for(int j=0;j<matrix[0].size();j++){
              maxim=min(maxim,matrix[i][j]);
                
            }
            mini.push_back(maxim);
        }
        for(int i=0;i<matrix[0].size();i++){
            int maxim=INT_MIN;
            for(int j=0;j<matrix.size();j++){
              maxim=max(maxim,matrix[j][i]);
                
            }
            maxi.push_back(maxim);
        }
        unordered_set<int>s;
        for(int a : mini) s.insert(a);
        for(int a : maxi) if(s.find(a)!=s.end()) ans.push_back(a);
        return ans;
    }
};