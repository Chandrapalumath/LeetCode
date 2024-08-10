class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()) return false;
        if(s==goal) return true;
        queue<char>a;
        queue<char>a1;
        for(char c:s) a.push(c);
        for(char c:goal) a1.push(c);
        for(int i=0;i<s.length();i++){
            if(a==a1) return true;
            char p=a.front();
            a.pop();
            a.push(p);
        }
        return a==a1;
    }
};