class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=0;
        ans+=numBottles;
        while(numBottles>=numExchange){
            int newb =numBottles/numExchange;
            int empty=numBottles%numExchange;
            ans+=newb;
            numBottles=newb+empty;
        }
        return ans; 
    }
};