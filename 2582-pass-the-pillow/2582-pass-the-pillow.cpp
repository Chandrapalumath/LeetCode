class Solution {
public:
    int passThePillow(int n, int time) {
        int index=1;
        int dir=1;
        for(int i=1;i<=time;i++){
           if(dir==1){
               if(index==n-1) dir=-1;
               index++;
           }else{
               if(index==2) dir=1;
               index--;
           }
        }
        return index;
    }
};