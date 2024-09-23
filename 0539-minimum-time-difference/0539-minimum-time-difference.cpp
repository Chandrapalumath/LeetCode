class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> ans;
        for(string t :timePoints){
            int h=stoi(t.substr(0,2));
            int m=stoi(t.substr(3,2));
            ans.push_back(h*60+m);
        }
        sort(ans.begin(),ans.end());
        int mini=INT_MAX;
        for(int i=1;i<ans.size();i++){
            mini=min(mini,ans[i]-ans[i-1]);
        }
        mini=min(mini,(24*60-ans[ans.size()-1]+ans[0]));
        return mini;
    }
};