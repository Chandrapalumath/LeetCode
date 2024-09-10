class Solution {
public:
    int numRabbits(vector<int>& answers) {
        vector<int>count(1000);
        int ans=0;
        for(int n : answers){
            if(count[n]%(n+1)==0) ans+=n+1;
            count[n]++;
        } 
        return ans;
    }
};