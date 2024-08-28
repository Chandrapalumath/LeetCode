class Solution {
public:
    bool wordPattern(string pattern, string s) {
        istringstream iss(s);
        vector<int>index(128);
        unordered_map<string,int>stringindex;
        int i=0;
        for(string word;iss>>word;i++){
            if(i==pattern.length()) return false;
            if(index[pattern[i]]!=stringindex[word]) return false;
            index[pattern[i]]=i+1;
            stringindex[word]=i+1;
        }
        return i==pattern.length();
    }
};