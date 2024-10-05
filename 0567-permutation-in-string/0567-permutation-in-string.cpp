class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int arr[26]={0};
        for(char c:s1) arr[c-'a']++;
        int ws=s1.length();
        int j=0,i=0;
        while(j<s2.length()){
            if(arr[s2.at(j++)-'a']-- > 0) ws--;
            if(ws==0) return true;
            if(j-i==s1.size() && arr[s2.at(i++)-'a']++>=0) ws++;
        }
        return false;
    }
};