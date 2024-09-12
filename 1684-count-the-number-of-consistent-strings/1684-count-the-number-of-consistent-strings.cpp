class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans=0;
        bool flag = true;
        for(auto w:words){
            flag = true;
            for(auto c: w){
                if(allowed.find(c)>allowed.size()){
                    flag = false;
                    break;
                }
            }
            if(flag) ans++;
        }
        return ans;
    }
};