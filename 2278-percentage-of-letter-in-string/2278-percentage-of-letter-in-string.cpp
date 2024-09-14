class Solution {
public:
    int percentageLetter(string s, char letter) {
        int ans=0;
        for(char c:s) if(c==letter) ans++;
        return (double(ans)/s.size())*100;
    }
};