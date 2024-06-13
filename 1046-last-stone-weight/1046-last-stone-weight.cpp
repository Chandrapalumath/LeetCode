class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n=stones.size();
        if(n==1){
            return stones[0];
        }
        for(int i=0;i<n;i++){
            sort(stones.begin(),stones.end());
            if(stones[n-1]==stones[n-2]){
                stones[n-1]=0;
                stones[n-2]=0;
            }else if(stones[n-1]>stones[n-2]){
                stones[n-1]-=stones[n-2];
                stones[n-2]=0;
            }else{
                stones[n-2]-=stones[n-1];
                stones[n-1]=0;
            }
        }
        int a;
        for(int i=0;i<n;i++){
            a+=stones[i];
        }
        return a;
    }
};