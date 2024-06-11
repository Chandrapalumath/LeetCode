class Solution {
public:
    double average(vector<int>& salary) {
        long sum=0;
        int max=INT_MIN;
        int min=INT_MAX;
        int n =salary.size();
        for(int i=0;i<n;i++){
            sum+=salary[i];
            if(salary[i]<min){
                min=salary[i];
            }
            if(salary[i]>max){
                max=salary[i];
            }
            
        }
        int s=n-2;
        return (double)(sum-min-max)/s;
    }
};