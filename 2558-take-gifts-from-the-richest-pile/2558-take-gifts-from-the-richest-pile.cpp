class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long ans=0;
        priority_queue<int>max;
        for(int n:gifts) max.push(n);
        for(int i=0;i<k;i++){
            int sq=sqrt(max.top());
            max.pop();
            max.push(sq);
        }
        while(!max.empty()){ 
            ans+=max.top();
            max.pop();
        }
        return ans;
    }
};