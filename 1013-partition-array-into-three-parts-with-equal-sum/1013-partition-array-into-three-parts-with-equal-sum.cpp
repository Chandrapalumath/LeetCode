class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum=0;
        for(int num:arr) sum+=num;
        if(sum%3!=0) return false;
        int avg=sum/3;
        int pc=0,sc=0;
        for(int num:arr){
            pc+=num;
            if(pc==avg){
                sc++;
                pc=0;
            }
        }
        return sc>=3;
    }
};