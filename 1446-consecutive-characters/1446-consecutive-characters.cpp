class Solution {
public:
    int maxPower(string s) {
        int n=s.length();
        int count=1,maxi=1;
        for(int i=1;i<n;i++){
            if(s[i-1]==s[i]){
                count++;
            }else{
                maxi=max(maxi,count);
                count=1;
            }
        }
        return max(maxi,count);
    }
};