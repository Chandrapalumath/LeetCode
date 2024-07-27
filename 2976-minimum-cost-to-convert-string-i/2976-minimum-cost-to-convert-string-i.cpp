class Solution {
public:
    long long minimumCost(string source, string target, vector<char>& original, vector<char>& changed, vector<int>& cost) {
        vector<vector<long>>distance(26,vector<long>(26,INT_MAX));
        for(int i=0;i<cost.size();i++) distance[original[i]-'a'][changed[i]-'a']=min(distance[original[i]-'a'][changed[i]-'a'],(long)cost[i]);
        for(int k=0;k<26;k++)
            for(int i=0;i<26;i++)
                for(int j=0;j<26;j++)
                    if(distance[i][k]<INT_MAX || distance[k][j]<INT_MAX)
                        distance[i][j]=min(distance[i][j],distance[i][k]+distance[k][j]);
        long long ans=0;
        for(int i=0;i<source.length();i++){
            if(source[i]==target[i]) continue;
            if(distance[source[i]-'a'][target[i]-'a']==INT_MAX) return -1;
            ans+=distance[source[i]-'a'][target[i]-'a'];
        }
        return ans;
    }
};