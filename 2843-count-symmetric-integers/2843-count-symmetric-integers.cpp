class Solution {
public:
    bool is_true(int a){
        if (a >= 10 && a <= 99)
            return a / 10 == a % 10;
        if (a >= 1000 && a <= 9999) {
            int left = a / 100;
            int right = a % 100;
            return left / 10 + left % 10 == right / 10 + right % 10;
        }
        return false;
    }
    int countSymmetricIntegers(int low, int high) {
        int ans=0;
        for(int i=low;i<=high;i++){
           if(is_true(i)){
            ans++;
           } 
        }
        
        return ans;
    }
};