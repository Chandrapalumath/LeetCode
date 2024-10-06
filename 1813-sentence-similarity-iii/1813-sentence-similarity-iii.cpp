class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
        if(sentence1.length()==sentence2.length()) return sentence1==sentence2;
        vector<string>w1;
        vector<string>w2;
        istringstream iss(sentence1);
        for(string s;iss>>s;) w1.push_back(s);
        istringstream iss1(sentence2);
        for(string s;iss1>>s;) w2.push_back(s);
        int m=w1.size(),n=w2.size();
        if(m>n) return areSentencesSimilar(sentence2,sentence1);
        cout<<m<<" "<<n;
        int i=0;
        while(i<m && w1[i]==w2[i]) i++;
        while(i<m && w1[i]==w2[i+n-m]) i++;
        return i==m;
    }
};