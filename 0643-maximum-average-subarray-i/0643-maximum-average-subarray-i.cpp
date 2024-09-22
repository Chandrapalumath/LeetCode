class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        //if(k==1) return (double)nums[0];
        double maxi=-100000;
        int sum=0;
        //finding sum of first k element 
        for(int i=0;i<k;i++) sum+=nums[i];
        for(int i=0;i+k<nums.size()+1;i++){
            maxi=max(maxi,(double)sum/k);
            sum-=nums[i];
            if(i+k<nums.size()) sum+=nums[i+k];
        }
        return maxi;
    }
};