class Solution {
public:
    int hammingWeight(int n) {
        int c=0;
        while(n){
            int p=n%2;
            if(p==1) c++;
            n/=2;
        }
        return c;
    }
};