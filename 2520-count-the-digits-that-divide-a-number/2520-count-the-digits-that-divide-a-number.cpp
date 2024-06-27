class Solution {
public:
    int countDigits(int num) {
        int n=num;
        int c=0;
        while(n){
            int d=n%10;
            if(num%d==0) c++;
            n/=10;
        }
        return c;
    }
};