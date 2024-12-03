class Solution {
public:
    int countOperations(int num1, int num2) {
        int op=0;
        while(1){
            if(num1==0 || num2==0) return op;
            if(num1>num2) num1-=num2;
            else num2-=num1;
            op++;
        }
        return op;
    }
};