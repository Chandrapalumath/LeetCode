class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int c=0;
        for(char cp:stones) if(jewels.find(cp)<jewels.length()) c++;
        return c;
    }
};