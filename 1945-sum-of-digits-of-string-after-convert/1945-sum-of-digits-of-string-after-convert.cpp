class Solution {
public:
    int getLucky(string s, int k) {
        int ans=0,a;
        for(char c:s){
            a=c-'a'+1;
            ans+= a<10 ?a:(a%10+a/10);
        }
        for(int i=1;i<k;i++){
            int ds=0;
            while(ans>0){
                ds+=ans%10;
                ans/=10;
            }
            ans=ds;
        }
        return ans;
    }
};