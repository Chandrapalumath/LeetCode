class Solution {
public:
    int sumBase(int n, int k) {
        vector<int>num;
        int ans=0;
        while(n){
            num.push_back(n%k);
            n/=k;
        }
        for(int n:num) ans+=n;
        return ans;
    }
};