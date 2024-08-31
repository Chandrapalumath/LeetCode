class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>ans;
        int b,e;
        for(int i=0;i<nums.size();i++){
            b=nums[i];
            while(i+1<nums.size() && nums[i]==nums[i+1]-1) i++;
            e=nums[i];
            if(b==e) ans.push_back(to_string(b));
            else ans.push_back(to_string(b)+"->"+to_string(e));
        }
        return ans;
    }
};