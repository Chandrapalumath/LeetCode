class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;
        string ans="";
        for(int i=0;i<numRows;i++){
            int k=2*(numRows-1);
            for(int j=i;j<s.length();j+=k){
                ans+=s[j];
                if(i>0 && i<numRows-1 && j+k-2*i<s.length()){
                    ans+=s[j+k-2*i];
                }
            }
        }
        return ans;
    }
};