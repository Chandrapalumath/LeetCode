class Solution {
public:
    int sum(int n){
        int s=0;
        while(n){
            s+=n%10;
            n/=10;
        }
        return s;
    }
    int addDigits(int num) {
        int p=num;
        while(p>=10){
            p=sum(p);
        }
        
        return p;
    }
};