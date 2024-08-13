class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(s.length()<p.length()) return {};
        vector<int>ans;
        vector<int>a1(27,0);
        vector<int>a2(27,0);
        for(int i=0;i<p.length();i++){
            a1[s[i]-'a']++;
            a2[p[i]-'a']++;
        }
        if(a1==a2) ans.push_back(0);
        int i=0,j=p.length();
        while(j<s.length()){
            a1[s[i]-'a']--;
            a1[s[j]-'a']++;
            i++;j++;
            if(a1==a2) ans.push_back(i);
        }
        return ans;
    }
};