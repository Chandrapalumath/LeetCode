class Solution {
public:
    int findComplement(int num) {
        if(num == 0){
            return 1;
        }

        for(long i = 1; i <= num; i *= 2){
            num ^= i;
        }
        return num;
    }
};