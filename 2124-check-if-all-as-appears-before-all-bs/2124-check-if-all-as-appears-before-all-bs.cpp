class Solution {
public:
    bool checkString(string s) {
        bool ans=false;
        for(char a : s){
            if(a=='a' && ans) return false;
            else if(a=='b') ans=true;
        }
        return true;
    }
};