class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int ind=0;
        if(ruleKey=="color") ind++;
        if(ruleKey=="name") ind+=2;
        int ans=0;
        for(auto a : items){
            if(a[ind]==ruleValue) ans++;
        }
        return ans;
    }
};