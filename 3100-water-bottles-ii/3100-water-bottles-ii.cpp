class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans=0;
        ans+=numBottles;
        while(numBottles>=numExchange){
            numBottles-=(numExchange-1);
            ans+=1;
            numExchange++;
        }
        return ans;
    }
};