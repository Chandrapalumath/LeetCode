class Solution {
public:
    bool isValid(string s) {
        stack <char> pt;
        for(char c : s){
            if(c=='(' || c=='[' || c=='{'){
                pt.push(c);
            }
            else{
            if(pt.empty() || c==')' && pt.top() != '(' || c==']' && pt.top() != '[' ||c=='}' && pt.top() != '{'){
                return false;
            }
            pt.pop();
        }}
        return pt.empty();
    }
};