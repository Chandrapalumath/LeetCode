class Solution {
public:
    int countSeniors(vector<string>& details) {
        //index 11 and 12 represent the age
        int c=0;
        for(auto a:details){
            if(a[11]=='6') {if(a[12]=='0') continue; else c++;}
            else if(a[11]>'6') {c++;cout<<a[11]<<" ";}
        }
        return c;
    }
};