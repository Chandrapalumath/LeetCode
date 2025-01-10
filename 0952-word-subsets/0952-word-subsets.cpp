class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        int maxfreq[26]={0};
        int tempfreq[26];
        for(auto word:words2){
            memset(tempfreq,0,sizeof tempfreq);
            for(char c:word) tempfreq[c-'a']++;
            for(int i=0;i<26;i++) maxfreq[i]=max(maxfreq[i],tempfreq[i]);
        }
        vector<string>ans;
        for(auto word:words1){
            memset(tempfreq,0,sizeof tempfreq);
            for(char ch:word) tempfreq[ch-'a']++;
            bool a=true;
            for(int i=0;i<26;i++){
                if(maxfreq[i]>tempfreq[i]){
                    a=false;break;
                }
            }
            if(a) ans.push_back(word);
        }
        return ans;
    }
};