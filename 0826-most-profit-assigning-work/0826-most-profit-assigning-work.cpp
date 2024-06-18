class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int n=difficulty.size();
        int m=worker.size();
        int o=profit.size();
        bool s;
        for(int i=0;i<o;i++){
            s=false;
            for(int j=0;j<o-i-1;j++){
                if(profit[j]<profit[j+1]){
                    swap(profit[j],profit[j+1]);
                    swap(difficulty[j],difficulty[j+1]);
                    s=true;
                }
            }
            if(s==false) break;
        }
        int c=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(difficulty[j]<=worker[i]){
                    c+=profit[j];
                    break;
                }
            }
        }
        return c;
    }
};