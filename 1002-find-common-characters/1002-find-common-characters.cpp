class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string>ans;
        vector<int>count_character(26,1000000);
        for(auto word : words){
            vector<int>count(26,0);
            for(auto i : word){
                count[i-'a']+=1;
            }
            for(int i=0;i<26;i++){
                count_character[i]=min(count_character[i],count[i]);
            }
        }
        for(char c='a';c<='z';c++){
            for(int i=0;i<count_character[c-'a'];i++){
                ans.push_back(string(1,c));
            }
        }
        return ans;
    }
};