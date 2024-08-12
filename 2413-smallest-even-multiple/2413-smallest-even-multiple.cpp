class Solution {
public:
    int smallestEvenMultiple(int n) {
        int s=n;
        while(1){
            if(s%n==0 && s%2==0) return s;
            else s*=2;
        }
    }
};