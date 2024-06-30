class Solution {
public:
    string sortSentence(string s) {
        vector<string>ans(10,"");
        string a="";
        for(int i=0;i<s.length();i++){
            if(isalpha(s[i])) a+=s[i];
            else if(isdigit(s[i])){
                int n=s[i]-48;
                ans[n]=a;
                a="";
            }
        }
        a="";
        int b=0,v=0;
        for(auto p : ans){
            if(p!="")b++;
        }
        for(auto p : ans){
            v++;
            if(p!="") {
                if(v==b+1){
                    a+=p;
                    break;
                }
                    cout<<p<<";";
                    a+=p;
                    a+=" ";
            }
        }
        return a;
    }
};