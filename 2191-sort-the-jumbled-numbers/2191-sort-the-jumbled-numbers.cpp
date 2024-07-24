class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        map<int,vector<int>>mp;
        for(int a : nums){
            int p=a;
            vector<int>temp;
            if(a==0) temp.push_back(a);
            while(a){
                temp.push_back(a%10);
                a/=10;
            }
            int sum=0;
            for(int i=temp.size()-1;i>=0;i--){
                sum=sum*10+mapping[temp[i]];
            }
            mp[sum].push_back(p);
        }
        vector<int>ans;
        for(auto a:mp){
            for(auto b :a.second) ans.push_back(b);
        }
        return ans;
    }
};