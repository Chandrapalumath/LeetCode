class Solution {
public:
    int secondMinimum(int n, vector<vector<int>>& edges, int time, int change) {
        vector<vector<int>>distance(n+1);
        vector<vector<int>>ans(n+1,vector<int>(2,INT_MAX));
        for(auto a:edges){
            distance[a[0]].push_back(a[1]);
            distance[a[1]].push_back(a[0]);
        }
        queue<pair<int,int>>q;
        q.push({1,0});
        ans[1][0]=0;
        while(!q.empty()){
            pair<int,int>a=q.front();
            q.pop();
            int p=a.first;
            int r=a.second;
            for(auto c:distance[p]){
                if(r+1<ans[c][0]){
                    ans[c][1]=ans[c][0];
                    ans[c][0]=r+1;
                    q.push({c,r+1});
                }else if(ans[c][0]<r+1 && r+1<ans[c][1]){
                    ans[c][1]=r+1;
                    q.push({c,r+1});
                }
            }
        }
        int mini=0;
        for(int i=0;i<ans[n][1];i++){
            mini+=time;
            if(i<ans[n][1]-1 && (mini/change)%2==1) mini+=change-(mini%change);
        }
        return mini;
    }
};