class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        set<string>ap;
        vector<string>ans;
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words.size();j++){
                if(words[i].find(words[j])<=words[i].size() && i!=j) ap.insert(words[j]);
            }
        }
        for(string a :ap) ans.push_back(a);
        return ans;
    }
};