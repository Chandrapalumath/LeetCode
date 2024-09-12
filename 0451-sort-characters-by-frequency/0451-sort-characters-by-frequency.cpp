class Solution {
public:
    bool static compare(pair<int,int> &p1,pair<int, int> &p2){
        if (p1.second == p2.second)
            return p1.first < p2.first;
        return p1.second > p2.second;
    }
    string frequencySort(string s) {
        map<int,int>mpp;
        for(char c:s){
            if(mpp.find(int(c))==mpp.end()) mpp[int(c)]=1;
            else mpp[int(c)]++;
        }
        string ans;
        pair<int,int>p[mpp.size()];
        int i = 0;
        for (auto it = mpp.begin(); it != mpp.end(); ++it)
            p[i++] = make_pair(it->first, it->second);
        sort(p, p + mpp.size(), compare);
        for(int i=0;i<mpp.size();i++){
            while(p[i].second--) ans+=p[i].first;
        }
        return ans;
    }
};