class Solution {
public:
    int minLength(string s) {
        stack<char>s1;
        for(auto c :s){
            if(s1.empty()) s1.push(c);
            else{
                if(s1.top()=='A' && c=='B' || s1.top()=='C' && c=='D') s1.pop();
                else s1.push(c);
            }
        }
        return s1.size();
    }
};