class Solution {
public:
    string reformatNumber(string number) {
        string ans,ans1;
        int i=0;
        for(char c:number) if(isdigit(c)) ans+=c;
        for(i=0;i+4<ans.size();i+=3) ans1+=ans.substr(i,3)+'-';
        int a=ans.size()-i;
        if(a<4) ans1+=ans.substr(i);
        else ans1+=ans.substr(i,2)+'-'+ans.substr(i+2);
        return ans1;
    }
};