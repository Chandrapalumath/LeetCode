class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int>mpp;
        unordered_map<string,int>mpp2;
        for(auto cp : words1){
            if(mpp.find(cp)==mpp.end()) mpp[cp]=1;
            else mpp[cp]++;
        }
        for(auto cp : words2){
            if(mpp2.find(cp)==mpp2.end()) mpp2[cp]=1;
            else mpp2[cp]++;
        }
        int ans=0;
        for(auto cp : mpp){
            if(cp.second==1){
                if(mpp2.find(cp.first)!=mpp2.end())if(mpp2[cp.first]==1) ans++;
            }
        }
        return ans;
    }
};