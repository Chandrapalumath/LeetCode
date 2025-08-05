class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();
        vector<vector<int>> dp(n+1, vector<int>(m+1));
        dp[0][0]=0;
        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(text1[i-1]==text2[j-1]) dp[i][j] = 1 + dp[i-1][j-1];//recur(text1, text2, n - 1, m - 1, dp);
                else{
                    dp[i][j] = max( dp[i-1][j] , dp[i][j-1] );
                }
            }
        }

        return dp[n][m];
    }

};

// Recursive code for lcs
/*

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size()-1;
        int m=text2.size()-1;
        return recur(text1,text2,n,m);
    }
    int recur(string text1, string text2, int n, int m){
        if(n<0 || m<0){
            return 0;
        }
        int pick=0;
        if(text1[n]==text2[m]) pick=1+recur(text1,text2,n-1,m-1);
        int nopick1 = recur(text1,text2,n,m-1);
        int nopick2 = recur(text1,text2,n-1,m);
        int nopick=max(nopick1,nopick2);
        return max(pick,nopick);
    }
};

*/

// Memoization code for lcs
/*
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return recur(text1, text2, n - 1, m - 1, dp);
    }

    int recur(string &text1, string &text2, int n, int m, vector<vector<int>> &dp) {
        if (n < 0 || m < 0) return 0;
        if (dp[n][m] != -1) return dp[n][m];

        if (text1[n] == text2[m]) {
            return dp[n][m] = 1 + recur(text1, text2, n - 1, m - 1, dp);
        } else {
            return dp[n][m] = max(
                recur(text1, text2, n - 1, m, dp),
                recur(text1, text2, n, m - 1, dp)
            );
        }
    }
};
*/

// Tabulation code for lcs
/*



*/