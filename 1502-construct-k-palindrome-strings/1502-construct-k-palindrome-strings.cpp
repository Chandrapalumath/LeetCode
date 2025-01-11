class Solution {
public:
    bool canConstruct(string s, int k) {
        unordered_map<char,int>freq;
        int si=0;
        for(char c:s) freq[c]++;
        for(auto a:freq) if(a.second%2==1) si++;
        return (si<=k && k<=s.size());
    }
};