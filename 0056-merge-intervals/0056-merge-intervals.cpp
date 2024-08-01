class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        for(int i=0;i<intervals.size();i++){
            int b=intervals[i][1],j=i+1,in=0;
            int max=b;
            while(j<intervals.size()){
                if(intervals[j][0]<=b){ 
                    if(intervals[j][1]>=b)  b=intervals[j][1];
                    in=j;
                    if(b>max) max=b;
                }else break;
                j++;
            }
            ans.push_back({intervals[i][0],max});
            i=j-1;
        }
        return ans;
    }
};