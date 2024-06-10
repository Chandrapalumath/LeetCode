class Solution {
public:
    string largestNumber(vector<int>& nums) {
        int n=nums.size();
        vector<string>s(n);
        for(int i=0;i<n;i++){
            s[i]=to_string(nums[i]);
        }
        sort(s.begin(),s.end(),[](string& s1, string& s2){
            return s1 + s2 > s2 + s1;
        });
        if(s[0]=="0") return "0";
        string r;
        for(int i=0;i<n;i++){
            r+=s[i];
        }
        return r;
    }
};