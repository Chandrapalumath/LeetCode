class Solution {
public:
    bool isprfsuf(string a,string b){
        string c=b, d=a;
        reverse(b.begin(),b.end());
        reverse(d.begin(),d.end());
        if(b.find(d)==0 && c.find(a)==0) return true;
        return false;
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int ans=0;
        for(int i=0;i<words.size();i++) for(int j=i+1;j<words.size();j++)
                if(isprfsuf(words[i],words[j])) ans++;
        return ans;
    }
};