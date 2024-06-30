class Solution {
public:
    int myAtoi(string s) {
        int c=0,u=0,b=0;
        double sum=0;
        bool minus=false;
        for(int i=0;i<s.size();i++){
            if((s[i]=='+' && s[i+1]=='-') ||(s[i]=='-' && s[i+1]=='+')||(s[i]=='+' && s[i+1]=='+')||(s[i]=='-' && s[i+1]=='-')){
                if(u>0) break;
                sum=0;
                break;
            }else if(s[i]=='-' || s[i] == '+'){
                b++;
                if(u>0) break;
                if(c>0) break;
                if(s[i]=='-') minus=true;
            }
            else if((s[i]-48)>=0 && (s[i]-48)<=9){
                u++;
                sum=sum*10+(s[i]-48);
                c++;
            }
            else if(s[i]==' '){
                if(b>0) break;
                if(c>0) break;
            }else{
                break;
            }
        }
        if(minus) sum=-sum;
        if(sum>INT_MAX) sum=INT_MAX;
        if(sum<INT_MIN) sum=INT_MIN;
        return sum;
    }
};