class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>ans(n,0);
        int index=0;
        int cp=n;
        while(cp>1){
            for(int j=0;j<k;j++,index++){
                while(ans[index%n]) index++;
            
            }
            ans[(index-1)%n]=1;
            cp--;
        }
        for(int i=0;i<ans.size();i++){
            if(ans[i]==0) return i+1;
        }
        return -1;
    }
};