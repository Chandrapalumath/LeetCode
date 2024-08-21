class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int a=0,b=0;
        if(name.length()>typed.length()) return false;
        while(b<typed.length()){
            if(a<name.length() && name[a]==typed[b]){a++;}
            else if(b==0 || typed[b]!=typed[b-1]) return false;
            b++;
        }
        return a==name.length();
    }
};