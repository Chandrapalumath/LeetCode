class Solution {
public:
    int titleToNumber(string c) {
        int ans=0;
        long long int p=1;
        reverse(c.begin(),c.end());
        for(char a:c){
            ans+=(p*(a-64));
            p*=26;
        }
        return ans;
    }
};