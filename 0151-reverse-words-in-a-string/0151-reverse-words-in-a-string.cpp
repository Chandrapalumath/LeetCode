#include<sstream>
class Solution {
public:
    string reverseWords(string s) {
        istringstream iss(s);
        string token;
        vector<string> tokens;
        while(iss>>token){
            tokens.push_back(token);
        }
        token="";
        int n=tokens.size()-1;
        for(int i=n;i>=1;i--){
            token+=(tokens[i]+" ");
        }
        token+=tokens[0];
        return token;
    }
};