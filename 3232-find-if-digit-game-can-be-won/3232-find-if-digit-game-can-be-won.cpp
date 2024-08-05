class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int s=0,d=0;
        for(int num : nums) num>=10 ? d+=num:s+=num;
        if(d==s)return false;return true; 
    }
};