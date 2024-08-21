class Solution {
public:
    bool dfs(int s,int d,vector<int>graph[],vector<bool>&is_visited){
        if(s==d) return true;
        is_visited[s]=true;
        for(int& j : graph[s]) if(!is_visited[j] && dfs(j,d,graph,is_visited)) return true;
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<bool>is_visited(n);
        vector<int>graph[n];
        for(auto e:edges){
            graph[e[0]].push_back(e[1]);
            graph[e[1]].push_back(e[0]);
        }
        return dfs(source,destination,graph,is_visited);
    }
};