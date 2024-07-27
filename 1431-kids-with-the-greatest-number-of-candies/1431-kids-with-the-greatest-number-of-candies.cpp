class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxcandy=INT_MIN;
        for(int a:candies) maxcandy=max(maxcandy,a);
        vector<bool>ans;
        for(int a : candies) a+extraCandies>=maxcandy ? ans.push_back(true):ans.push_back(false);
        return ans;
    }
};