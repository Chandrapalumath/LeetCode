class Solution {
public:
    int minOperations(vector<string>& s) {
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i][0]=='.' && s[i][1]=='.'){if(count>0) count--;} 
            else if(s[i][0]=='.' && s[i][1]=='/') continue;
            else count++;
        }
        return count;
    }
};