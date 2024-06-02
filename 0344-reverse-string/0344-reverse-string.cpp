class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size()-1;
        for(int i=0;i<=n/2;i++){
            char r=s[i];
            s[i]=s[n-i];
            s[n-i]=r;
        }
    }
};