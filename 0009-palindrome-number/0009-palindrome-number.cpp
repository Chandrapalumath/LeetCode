class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long a=x,sum=0,p;
        while(a){
            p=a%10;
            sum=sum*10+p;
            a=a/10;
        }
        if(sum==x){
            return true;
        }else{
            return false;
        }
    }
};