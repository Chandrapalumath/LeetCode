class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long a=0;
        for(int i=0;i<chalk.size();i++){
            a+=chalk[i];
        }
        k=k%a;
        if(k==0) return 0;
        for(int i=0;i<chalk.size();i++){
            k-=chalk[i];
            if(k<0) return i;
        }
        return 0;
    }
};