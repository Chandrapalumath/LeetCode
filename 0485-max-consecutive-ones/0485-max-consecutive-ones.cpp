class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>&s) {
        int c=0;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==1) c++;
            else{
                ans=max(ans,c);
                c=0;
            }
        }
        ans=max(ans,c);
        return ans;
    }
};