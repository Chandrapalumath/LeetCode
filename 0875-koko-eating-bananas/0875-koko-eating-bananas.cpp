class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1,high=-1,ans;
        for(int a:piles) high=max(a,high);
        while(low<=high){
            long long hrs=0;
            int mid=(low+high)/2;
            for(int a:piles) hrs+=ceil((double)a/(double)mid);
            if(hrs<=h) high=mid-1;
            else low=mid+1;
        }
        return low;
    }
};