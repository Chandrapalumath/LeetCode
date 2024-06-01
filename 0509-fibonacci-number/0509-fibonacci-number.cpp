class Solution {
public:
    int fib(int n) {
        int f=0,s=1;
        int sum=0;
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        for(int i=2;i<n;i++){
            s=f+s;
            f=s-f;
        }
        return f+s;
    }
};