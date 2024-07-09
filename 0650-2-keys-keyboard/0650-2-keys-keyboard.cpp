class Solution {
public:
    int minSteps(int n) {
        int ans=0;
        for(int p=2;p*p<=n;p++){
            while(n%p==0){
                ans+=p;
                n/=p;
            }
        }
        if(n!=1) return ans+n;
        return ans;
    }
};