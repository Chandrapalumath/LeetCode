class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int>a1(128);
        vector<int>a2(128);
        for(int i=0;i<s.length();i++){
            if(a1[s[i]]!=a2[t[i]])return false;
            a1[s[i]]=i+1;
            a2[t[i]]=i+1;
        }
        return true;
    }
};