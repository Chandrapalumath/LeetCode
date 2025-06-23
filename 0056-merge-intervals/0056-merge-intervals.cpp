class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        //Brute Force Approach
        /*for(int i=0;i<intervals.size();i++){
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
        }*/
        //Optimal Approach
        ans.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]>ans.back()[1]) ans.push_back(intervals[i]);
            else ans.back()[1]=max(ans.back()[1],intervals[i][1]);
        }
        return ans;
    }
};