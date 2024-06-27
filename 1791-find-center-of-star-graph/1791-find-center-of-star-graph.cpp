class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n=edges.size();
        map<int,int>s;
        for(int i=0;i<n;i++){
            for(int j=0;j<2;j++){
                if(s.find(edges[i][j])==s.end()){ s[edges[i][j]] = 1; }
                else s[edges[i][j]]++;
            }
        }
        int max=INT_MIN;
        int a;
        for(auto p : s){
            if(p.second>max){
                max=p.second;
                a=p.first;
            }
        }
        return a;
    }
};