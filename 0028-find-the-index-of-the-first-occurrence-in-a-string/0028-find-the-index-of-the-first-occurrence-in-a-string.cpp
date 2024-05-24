class Solution {
public:
    int strStr(string haystack, string needle) {
        int a=haystack.length();
        int b=needle.length();
        if(a<b){
            return -1;
        }
        int i=0,j=0;
        while(i!=a){
            if(needle[0]==haystack[i]){
                int count=0;
                for(int j=0;j<b && (i+j)<=a;j++){
                    if(needle[j]==haystack[i+j]){
                        count=count+1;
                    }
                    if(count==b){
                        return i;
                    }
                }
            }
            i++;
        }
        return -1;
    }
};