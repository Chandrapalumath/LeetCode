class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int arr[26]={0};
        int n=words.size();
        for(int i=0;i<n;i++){
            string s=words[i];
            int p=s.length();
            for(int j=0;j<p;j++){
               char a=s[j];
               int index=(int)(a-'a');
               arr[index]++;
                
            }
        }
        for(int i : arr){
            if(i%n!=0){
                return false;
            }
        }
        return true;
    }
};