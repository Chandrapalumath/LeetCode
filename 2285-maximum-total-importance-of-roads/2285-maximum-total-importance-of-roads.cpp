class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<long long>v(n,0);
        int a=roads.size();
        for(int i=0;i<a;i++){
            v[roads[i][0]]++;
            v[roads[i][1]]++;
        }
        long long ans=0;
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            ans+=(v[i]*(i+1));
        }
        return ans;
    }
};