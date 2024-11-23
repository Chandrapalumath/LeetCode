class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string>ans;
        int a=s[0],b=s[3],c=s[1],d=s[4];
        for(char st=a;st<=b;st++)
            for(char pt=c;pt<=d;pt++)
                ans.push_back(string(1,st)+pt);
        return ans;
    }
};