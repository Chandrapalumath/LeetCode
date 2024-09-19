class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        //checking for the element in the suits
        sort(suits.begin(),suits.end());
        int a=0;
        for(int i=0;i<4;i++){
            if(suits[i]!=suits[i+1]) break;
            else a++;
        }
        if(a==4) return "Flush";
        //Checking for the rank
        sort(ranks.begin(),ranks.end());
        int p=0,q=0;
        for(int i=0;i<4;i++){
            if(ranks[i]!=ranks[i+1]){
                q=max(q,p);
                p=0;
            }else p++;
        }
        q=max(q,p);
        if(q>=2) return "Three of a Kind";
        if(q==1) return "Pair";
        return "High Card";
    }
};