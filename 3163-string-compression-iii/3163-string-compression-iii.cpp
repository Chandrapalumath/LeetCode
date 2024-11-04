class Solution {
public:
    string compressedString(string word) {
        string ans;
        for(int i=0,j=0;i<word.length();i=j){
            int c=0;
            while(j<word.length() && word[j]==word[i] && c<9){
                j++;c++;
            }
            ans+=to_string(c)+word[i];
        }
        return ans;
    }
};