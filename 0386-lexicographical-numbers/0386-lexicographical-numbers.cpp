class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<string>ans1;
        for(int i=1;i<=n;i++) ans1.push_back(to_string(i));
        sort(ans1.begin(),ans1.end());
        vector<int>ans2;
        for(int i=0;i<n;i++) ans2.push_back(stoi(ans1[i]));
        return ans2;
    }
};

//First Approach to use the nlogn time complexity
        /*vector<string>ans1;
        for(int i=1;i<=n;i++) ans1.push_back(to_string(i));
        sort(ans1.begin(),ans1.end());
        vector<int>ans2;
        for(int i=0;i<n;i++) ans2.push_back(stoi(ans1[i]));
        return ans2;*/