class Solution {
public:
    int minimumDeletions(string s) {
        vector<int>freq(s.length()+1,0);
        int a=0;
        for(int i=1;i<=s.length();i++){
            if(s[i-1]=='a') freq[i]=min(freq[i-1]+1,a);
            else{
                freq[i]=freq[i-1];a++;
            }
        }
        return freq[s.length()];
    }
};