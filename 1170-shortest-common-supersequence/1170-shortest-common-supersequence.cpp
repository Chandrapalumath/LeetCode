class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
        vector<vector<int>> ans = longestCommonSubsequence(str1,str2);
        string answer="";
        int i=ans.size()-1;
        int j=ans[0].size()-1;
        while (i > 0 && j > 0) {
            if (str1[i - 1] == str2[j - 1]) {
                answer += str1[i - 1];
                i--; j--;
            } else if (ans[i - 1][j] > ans[i][j - 1]) {
                answer += str1[i - 1];
                i--;
            } else {
                answer += str2[j - 1];
                j--;
            }
        }
        while(i>0){
            answer+=str1[i-1];
            i--;
        }
        while(j>0){
            answer+=str2[j-1];
            j--;
        }
        reverse(answer.begin(),answer.end());
        return answer;
    }
    vector<vector<int>> longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();
        vector<vector<int>> dp(n+1, vector<int>(m+1, 0)); // Base case 0 initialized

        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                if (text1[i-1] == text2[j-1]) {
                    dp[i][j] = 1 + dp[i-1][j-1];
                } else {
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }

        return dp;
    }
};