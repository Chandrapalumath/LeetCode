class Solution {
public:
    int secondHighest(string s) {
        int fl=-1;
        int sl=-1;
        for(char c : s){
            if(isdigit(c)){
                if((c-48)>fl){
                    sl=fl;
                    fl=c-48;
                }else{
                    if(sl<c-48 && c-48!=fl){
                        sl=c-48;
                    }
                }
            }
        }
        if(fl==sl) return -1;
        return sl;
    }
};