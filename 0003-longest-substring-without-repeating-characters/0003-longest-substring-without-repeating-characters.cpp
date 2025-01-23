class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,ans=0;
        unordered_set<char>charset;
        for(int r=0;r<s.length();r++){
            while(charset.find(s[r])!=charset.end()){
                charset.erase(s[l]);
                l++;
            }
            charset.insert(s[r]);
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};