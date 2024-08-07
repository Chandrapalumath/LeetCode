class Solution {
public:
    vector<vector<int>> buildMatrix(int k, vector<vector<int>>& rowConditions, vector<vector<int>>& colConditions) {
        vector<int>row=inorder(k,rowConditions);
        vector<int>col=inorder(k,colConditions);
        if(row.size()==0 || col.size()==0) return {};
        vector<pair<int,int>>index(k);
        for(int i=0;i<k;i++){
            index[row[i] - 1].first = i;
            index[col[i] - 1].second = i;
        }
        vector<vector<int>> ans(k, vector<int>(k, 0));
        for(int i = 0; i < k; i++) {
            ans[index[i].first][index[i].second] = i + 1;
        }
        return ans;
    }
    vector<int> inorder(int k,vector<vector<int>>& dp){
        vector<vector<int>>sorted(k+1);
        vector<int>degree(k+1);
        for(auto i:dp){
            sorted[i[0]].push_back(i[1]);
            degree[i[1]]++;
        }
        queue<int>q;
        for(int i=1;i<=k;i++){
            if(degree[i]==0) q.push(i);
        }
        int c=0;
        vector<int>correct;
        while(!q.empty()){
            int a=q.front();
            q.pop();
            c++;
            correct.push_back(a);
            for(int w : sorted[a]){
                degree[w]--;
                if(degree[w]==0) q.push(w);
            }
        }
        if(c==k) return correct;
        return {};
    }
};




// class Solution {
// public:
//     // Same Code as Course Schedule - 2
//     vector<int> findOrder(int k, vector<vector<int>>& dependencies) {

//         vector<vector<int>> adj(k + 1);
//         vector<int> indegree(k + 1);
//         for(auto dependency: dependencies) {
//             adj[dependency[0]].push_back(dependency[1]);
//             indegree[dependency[1]]++;
//         }

//         queue<int> q;
//         for(int i = 1; i <= k; i++) {
//             if(indegree[i] == 0) {
//                 q.push(i);
//             }
//         }

//         int cnt = 0;
//         vector<int> order;
//         while(!q.empty()) {

//             int cur = q.front();
//             q.pop();

//             cnt++;
//             order.push_back(cur);

//             for(int nbr: adj[cur]) {
//                 indegree[nbr]--;

//                 if(indegree[nbr] == 0) {
//                     q.push(nbr);
//                 }
//             }
//         }

//         if(cnt == k) return order;
//         return {};
//     }

//     vector<vector<int>> buildMatrix(int k, vector<vector<int>>& rowConditions, vector<vector<int>>& colConditions) {
//         vector<int> rowArray = findOrder(k, rowConditions);
//         vector<int> colArray = findOrder(k, colConditions);

//         // If one of the row conditions or col conditions has a cycle
//         if(rowArray.size() == 0 || colArray.size() == 0) {
//             return {};
//         }

//         vector<pair<int, int>> ind(k);   // list of indices (i, j) for k values
// 		// from topological ordering deriving the indices for the values
//         for(int i = 0; i < k; i++) {
//             ind[rowArray[i] - 1].first = i;
//             ind[colArray[i] - 1].second = i;
//         }

//         vector<vector<int>> result(k, vector<int>(k, 0));
// 		// iterate over the values and place then in the result grid
//         for(int i = 0; i < k; i++) {
//             result[ind[i].first][ind[i].second] = i + 1;
//         }
//         return result;
//     }
// };