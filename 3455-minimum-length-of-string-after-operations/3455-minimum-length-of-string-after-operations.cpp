class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char,int>count;
        for(char c:s) count[c]++;
        int sub=0;
        for(auto a:count){
            while(a.second>=3){sub+=2; a.second-=2;}
        }
        return s.length()-sub;
    }
};