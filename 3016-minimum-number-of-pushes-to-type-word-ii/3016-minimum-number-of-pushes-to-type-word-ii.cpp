class Solution {
public:
    int minimumPushes(string word) {
        vector<int>c(26,0);
        for(char w:word) c[w-'a']++;
        sort(c.begin(),c.end(),greater<int>());
        int p=0,ans=0;
        for(int i=0;i<26;i++){
            if(p<8) ans+=c[i];
            else if(p<16) ans+=2*c[i];
            else if(p<24)ans+=3*c[i];
            else ans+=4*c[i];
            if(c[i]>0) p++;
        }
        return ans;
    }
};