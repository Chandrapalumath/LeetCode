class Solution {
public:
    int minimumMoves(string s) {
        int ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='X'){
                ans++;
                if(i+1<s.length() || i+2<s.length()) {
                    if(i+2>=s.length()) break;
                    s[i+1]='O';s[i+2]='O';
                }
            }
        }
        return ans;
    }
};