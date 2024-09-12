class Solution {
public:
    int similarPairs(vector<string>& words) {
        int ans=0;
        bool flag = true;
        for(int i=0;i<words.size();i++){
            for(int j=i+1;j<words.size();j++){
                flag=true;
                for(auto c: words[j]){
                    if(words[i].find(c)>max(words[i].size(),words[j].size())){
                        flag = false;
                        break;
                    }
                }
                for(auto c: words[i]){
                    if(words[j].find(c)>max(words[j].size(),words[i].size())){
                        flag = false;
                        break;
                    }
                }
                if(flag) {ans++;cout<<"Hii";}
            }
        }
        return ans;
    }
};
            