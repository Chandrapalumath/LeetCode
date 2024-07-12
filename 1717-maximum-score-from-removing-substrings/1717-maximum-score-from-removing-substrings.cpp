class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int ans=0;
        if(x<y){
            swap(x,y);
            reverse(s.begin(),s.end());
        }
        stack<int>s1;
        stack<int>s2;
        for(int i=0;i<s.length();i++){
            if(s[i]!='b') s1.push(s[i]);
            else{
                if(!s1.empty() && s1.top()=='a'){
                    ans+=x;
                    s1.pop();
                }else s1.push(s[i]);
            }
        }
        while(!s1.empty()){
            if(s1.top()!='b') s2.push(s1.top());
            else{
                if(!s2.empty() && s2.top()=='a'){
                    ans+=y;
                    s2.pop();
                }else s2.push(s1.top());
            }
            s1.pop();
        }
        return ans;
    }
};