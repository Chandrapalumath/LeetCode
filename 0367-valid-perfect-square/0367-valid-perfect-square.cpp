class Solution {
public:
    bool isPerfectSquare(int num) {
        long int a=sqrt(num);
        if(a*a==num){
            return true;
        }
        return false;
    }
};