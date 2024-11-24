class Solution {
public:
    string toHex(int num) {
        if(num==0) return "0";
        string ans="";
        for(int i=7;i>=0;i--){
            int dig=(num>>(4*i)) & 0xf;
            if(ans.size()>0 || dig!=0){
                char c=dig<10?(char)(dig+'0'):(char)(dig-10+'a');
                ans+=c;
                
            }
        }
        return ans;
    }
};