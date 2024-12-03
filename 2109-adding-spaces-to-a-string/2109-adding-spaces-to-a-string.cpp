class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int i=0,p=0;
        string ans;
        for(char c:s){
            if(p<spaces.size() && i==spaces[p]){ans+=' ';p++;cout<<' ';}
            i++;
            ans+=c;
            cout<<c;
        }
        return ans;
    }
};