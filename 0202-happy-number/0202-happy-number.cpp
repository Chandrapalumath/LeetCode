class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>c;
        while(c.find(n)==c.end()){
            c.insert(n);
            int s=0;
            while(n){
                int d=n%10;
                s+=d*d;
                n/=10;
            }
            n=s;
            if(n==1) return true;
        }
        return false;
    }
};