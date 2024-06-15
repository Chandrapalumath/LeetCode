class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        if(n==1){
            return n;
        }
        int count=0;
        int index=0;
        for(int i=0;i<n;){
            char c=chars[i];
            count=0;
            while(i<n && chars[i]==c){
                count++;
                i++;
            }
            chars[index]=c;
            index++;
            if(count>1){
                for(char a : to_string(count)){
                    chars[index++]=a;
                }
            }
        }
        return index;
    }
};