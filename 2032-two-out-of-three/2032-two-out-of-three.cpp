class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int>ans;
        vector<int>cnt(101);
        for(auto num: {nums1,nums2,nums3}){
            unordered_set<int> a(num.begin(),num.end());
            for(auto c:a) cnt[c]++;
        }
        for(int i=0;i<101;i++){
            if(cnt[i]>=2) ans.push_back(i);
        }
        return ans;
    }
};