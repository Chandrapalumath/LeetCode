class Solution {
public:
    long long dp[1001][1001];
    int numWays(vector<string>& words, string target) {
        int x=words[0].size();
        vector<vector<int>>temp(x,vector<int>(26,0));
        for(string a:words){
            for(int i=0;i<a.size();i++){
                temp[i][a[i]-'a']++;
            }
        }
        memset(dp,-1,sizeof dp);
        return help(0,target,temp,0);
    }
    long long help(int i,string &t,vector<vector<int>>&temp,int j){
        if(i==t.size()) return 1;
        if(j==temp.size()) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int ans=0;
        ans+=help(i,t,temp,j+1);
        ans%=1000000007;
        ans+=(temp[j][t[i]-'a']*help(i+1,t,temp,j+1))%1000000007;
        return dp[i][j]=ans%1000000007;
    }
};