class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int z=0,o=0;
        for(char c:s) c=='1'?o++:z++;
        string ans;
        o--;
        for(int i=0;i<o;i++) ans+='1';
        for(int i=0;i<z;i++) ans+='0';
        ans+='1';
        return ans;
    }
};