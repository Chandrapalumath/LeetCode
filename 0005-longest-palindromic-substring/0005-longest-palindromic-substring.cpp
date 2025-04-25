class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        if(n==1) return s;
        int start=0,ml=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<=1;j++){
                int low=i;
                int high=j+i;
                while(low>=0 && high<n && s[low]==s[high]){
                    int cur=high-low+1;
                    if(cur>ml){
                        ml=cur;
                        start=low;
                    }
                    low--;
                    high++;
                }
            }

        }
        return s.substr(start,ml);
    }
};