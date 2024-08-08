class Solution {
public:
    string largestOddNumber(string num) {
        int i;
        for(i=num.length()-1;i>=0;i--){
            if((int(num[i])-48)%2!=0) break;
        }
        string ans="";
        for(int j=0;j<i+1;j++){
            ans+=num[j];
        }
        return ans;
    }
};