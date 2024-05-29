class Solution {
public:
    int mySqrt(int x) {
        int sum,cnt=0,odd=1;
        sum=x;
        while(sum>0){
            sum-=odd;
            odd+=2;
            if(sum>=0){
                cnt++;
            }
        };
        return cnt;
    }
};