class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string p=s;
        reverse(s.begin(),s.end());
        return longestCommonSubsequence(s,p);
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size();
        int m=text2.size();
        vector<int>prev(m+1);
        //Base Case Handling
        prev[0]=0;
        for (int i=1;i<n+1;i++){
            vector<int>cur(m+1);
            cur[0]=0;
            for(int j=1;j<m+1;j++){
                if(text1[i-1]==text2[j-1]){
                    cur[j]= 1+prev[j-1];//recur(text1,text2,i-1,j-1,dp);
                }else{
                    cur[j]=max(prev[j],cur[j-1]);
                }
                
            }
            prev=cur;
        }
        return prev[m];
    }
};