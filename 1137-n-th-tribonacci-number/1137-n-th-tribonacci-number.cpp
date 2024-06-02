class Solution {
public:
    int tribonacci(int n) {
        int ans=0;
        int f=0,s=1,t=1;
        if(n==0) return 0;
        if(n==1) return 1;
        if(n==2) return 1;
        for(int i=3;i<n;i++){
            int p=t;
            t=f+s+t;
            f=s;
            s=p;
        }
        return(f+s+t);
    }
};