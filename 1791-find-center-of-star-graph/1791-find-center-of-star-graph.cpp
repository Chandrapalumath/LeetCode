class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
//      // This is the First Approach  Runtime: 234 ms, faster than 6.72% of C++ online submissions for Find Center of Star Graph.
// Memory Usage: 87.1 MB, less than 17.53% of C++ online submissions for Find Center of Star Graph.
    //     int n=edges.size();
    //     map<int,int>s;
    //     for(int i=0;i<n;i++){
    //         for(int j=0;j<2;j++){
    //             if(s.find(edges[i][j])==s.end()){ s[edges[i][j]] = 1; }
    //             else s[edges[i][j]]++;
    //         }
    //     }
    //     int max=INT_MIN;
    //     int a;
    //     for(auto p : s){
    //         if(p.second>max){
    //             max=p.second;
    //             a=p.first;
    //         }
    //     }
    //     return a;
        
        
        
        
        //Second Approach ->
        
        return edges[0][0]==edges[1][0] || edges[0][0]==edges[1][1] ? edges[0][0] : edges[0][1];
    }
};