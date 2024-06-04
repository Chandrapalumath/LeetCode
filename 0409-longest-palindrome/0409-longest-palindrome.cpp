class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>cp;
        int res=0;
        for(auto p : s){
            if(cp.find(p)!=cp.end()) cp[p]++;
            else cp[p]=1;
        }
        for(auto p : cp){
            int a=p.second;
            res+=a-(a%2);
        }
        return (res==s.size() ? res : res+1);
    }
};