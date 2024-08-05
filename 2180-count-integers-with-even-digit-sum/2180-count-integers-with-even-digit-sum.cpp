class Solution {
public:
    int countEven(int num) {
        int s=0,n=num;
        while(num){
            s+=num%10;
            num/=10;
        }
        return (n-s%2)/2;
    }
};