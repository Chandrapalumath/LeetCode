class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string>ans;
        unordered_map<string,int>mpp;
        istringstream iss(s1+' '+s2);
        while(iss>>s1) mpp[s1]++;
        for(auto a: mpp) if(a.second==1) ans.push_back(a.first);
        return ans;  
    }
};