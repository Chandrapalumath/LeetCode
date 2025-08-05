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