class Solution {
public:
    bool hasAlternatingBits(int n) {
        int c,d;
        d=n%2;
        n/=2;
        c=d;
        while(n){
            d=n%2;
            if(d==c) return false;
            else c=d;
            n/=2;
        }
        return true;
    }
};