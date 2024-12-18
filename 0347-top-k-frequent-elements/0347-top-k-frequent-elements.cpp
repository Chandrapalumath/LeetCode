class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        for(int n:nums) mpp[n]++;
        vector<pair<int, int>> freq(mpp.begin(), mpp.end());
        sort(freq.begin(),freq.end(),[](pair<int,int>& a,pair<int,int>& b) {
            return a.second > b.second;
        });
        vector<int>ans;
        for (int i=0;i<k;i++) {
            ans.push_back(freq[i].first);
        }
        return ans;
    }
};