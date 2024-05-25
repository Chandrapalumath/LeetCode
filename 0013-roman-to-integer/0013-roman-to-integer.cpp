class Solution {
public:
    int arr[7]={1,5,10,50,100,500,1000};
    char srr[7]={'I','V','X','L','C','D','M'};
    int indexo(char p){
        for(int i=0;i<7;i++){
            if(p==srr[i]){
                return arr[i];
            }
        }
        return -1;
    }
    int romanToInt(string s) {
        int sum=0,i;
        int n=s.length();
        for(i=0;i<n-1;i++){
            int a=indexo(s[i]);
            int b=indexo(s[i+1]);
            if(a>=b){
               sum+=a; 
            }else{
                sum+=(b-a);
                i++;
            }
        }
        if(i<n){
            int r=indexo(s[i]);
            sum+=r;
        }
        return sum;
    }
};