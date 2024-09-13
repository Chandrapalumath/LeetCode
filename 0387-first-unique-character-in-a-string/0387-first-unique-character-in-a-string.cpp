class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>mpp;
        for(char c : s){
            if(mpp.find(c)==mpp.end()) mpp[c]=1;
            else mpp[c]++;
        }
        for(int i=0;i<s.size();i++){
            if(mpp[s[i]]==1) return i;
        }
        return -1;
    }
};