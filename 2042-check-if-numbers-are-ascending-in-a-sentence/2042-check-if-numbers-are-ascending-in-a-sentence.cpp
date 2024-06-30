class Solution {
public:
    bool areNumbersAscending(string s) {
        int n=0,p=INT_MIN;
        bool l=false;
        for(int i=0;i<s.length();i++){
            if(isdigit(s[i])){
                n=n*10+(s[i]-48);
                l=true;
            }else if(l){
                if(n>p){
                    p=n;
                    n=0;
                    l=false;
                }else return false;
            }
        }
        if(l){
            return n>p ?  true: false;
        }
        return true;
    }
};