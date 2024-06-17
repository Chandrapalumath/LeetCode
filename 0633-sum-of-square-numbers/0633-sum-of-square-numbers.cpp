class Solution {
public:
    bool judgeSquareSum(int c) {
        long s=0;
        long r=0;
        r=sqrt(c)+1;
        while(s<=r){
            long sum=s*s+r*r;
            if(sum==c){
                return true;
            }else if(sum>c){
                r--;
            }else{
                s++;
            }
        }
        return false;
    }
};