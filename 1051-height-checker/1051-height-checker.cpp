class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>s=heights;
        sort(s.begin(),s.end());
        int n=heights.size();
        int a=0;
        for(int i=0;i<n;i++){
            if(heights[i]!=s[i]){
                a++;
            }
        }
        return a;
    }
};