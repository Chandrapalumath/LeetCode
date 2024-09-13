class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int>mpp;
        for(char c : s){
            if(mpp.find(c)==mpp.end()) mpp[c]=1;
            else mpp[c]++;
            if(mpp[c]==2) return c;
        }
        return 'a';
    }
};