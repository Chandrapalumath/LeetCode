class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        if(bills[0]>10) return false;
        int five=0,ten=0;
        for(auto a:bills){
            if(a==5) five++;
            else if(a==10 && five){ten++;five--;}
            else if(a==20 && ((ten>0 && five>0) || (five>=3))){
                if(ten>0 && five>0) {ten--;five--;}
                else {five-=3;}
            }else{
                return false;
            }
        }
        return true;
    }
};