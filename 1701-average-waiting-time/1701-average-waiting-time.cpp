class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double wt=0;
        int st=customers[0][0];
        for(int i=0;i<customers.size();i++){
            if(st>customers[i][0]){
                st+=customers[i][1];
                wt+=(st-customers[i][0]);
            }else{
                st=customers[i][0];
                st+=customers[i][1];
                wt+=(st-customers[i][0]);
            }
        }
        return wt/customers.size();
    }
};