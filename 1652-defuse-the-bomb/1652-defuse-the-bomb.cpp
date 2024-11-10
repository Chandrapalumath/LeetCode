class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        vector<int>ans(n);
        if(k==0) return ans;
        int sum=0;
        int s=k>0?1:n+k;
        int e=k>0?k:n-1;
        for(int i=s;i<=e;i++) sum+=code[i];
        for (int i = 0; i < n; ++i) {
            ans[i] = sum;
            sum-=code[s++ % n];
            sum+=code[++e % n];
        }
        return ans;
    }
};