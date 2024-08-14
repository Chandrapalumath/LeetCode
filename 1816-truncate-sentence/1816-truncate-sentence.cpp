class Solution {
public:
    string truncateSentence(string s, int k) {
        int n=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==' ')n++;
            if(n==k) return s.substr(0,i);
        }
        return s;
    }
};