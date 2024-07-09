class Solution {
public:
    string originalDigits(string s) {
        vector<int>c(10);
        for(char p:s){
            switch(p){
                case 'z' :c[0]++;break;
                case 'o' :c[1]++;break;
                case 'w' :c[2]++;break;
                case 'h' :c[3]++;break;
                case 'u' :c[4]++;break;
                case 'f' :c[5]++;break;
                case 'x' :c[6]++;break;
                case 's' :c[7]++;break;
                case 'g' :c[8]++;break;
                case 'i' :c[9]++;break;
            }
        }
        c[1]-=c[2]+c[4]+c[0];
        c[3]-=c[8];
        c[5]-=c[4];
        c[7]-=c[6];
        c[9]-=c[8]+c[6]+c[5];
        string ans;
        for(int i=0;i<10;i++)
            for(int j=0;j<c[i];j++) ans+=i+'0';
        return ans;
    }
};