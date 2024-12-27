class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int ans=0,prev=0;
        for(int n:values){
            ans=max(ans,prev+n);
            prev=max(prev,n)-1;
        }
        return ans; 
    }
};