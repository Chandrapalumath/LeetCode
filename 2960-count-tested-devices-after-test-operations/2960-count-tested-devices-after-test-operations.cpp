class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int j=0,t=0;
        for(int i=0;i<batteryPercentages.size();i++){
            if(batteryPercentages[i]==0 || batteryPercentages[i]-j<=0) continue;
            t++;
            j++;
        }
        return t;
    }
};