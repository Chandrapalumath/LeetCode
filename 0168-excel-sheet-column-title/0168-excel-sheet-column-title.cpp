class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans;
        while(columnNumber){
            columnNumber--;
            int a=columnNumber%26;
            ans+=(char)(a+'A');
            columnNumber/=26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};