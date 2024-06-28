class Solution {
public:
    bool check(int n){
        int a=n;
        while(n){
            int d=n%10;
            if(d==0) return false;
            if(a%d!=0) return false;
            n/=10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>num;
        for(int i=left;i<=right;i++){
            if(i<10) num.push_back(i);
            else {
                if(check(i)){
                    num.push_back(i);
                }
            }
        }
        return num;
    }
};