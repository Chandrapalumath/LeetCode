class Solution {
public:
    int dayOfYear(string date) {
        string ans;bool isleap=false;
        for(int i=0;i<4;i++) ans+=date[i];
        int year=stoi(ans);
        if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) isleap=true;
        ans="";
        ans+=date[5];ans+=+date[6];
        int month=stoi(ans);
        int arr[]={31,28,31,30,31,30,31,31,30,31,30,31};
        int a=0;
        for(int i=0;i<month-1;i++)  a+=arr[i];
        ans="";
        ans+=date[8];ans+=date[9];
        int day=stoi(ans);
        cout<<day;
        a+=day;
        if(isleap && month>2)a+=1;
        return a;
    }
};