class Solution {
public:
    string removeDigit(string number, char digit) {
        string ans;
        int count=0;
        for(int i=0;i<number.length()-1;i++){
            if(count==0 && number[i]==digit && number[i]<number[i+1]){
                cout<<"Hii";
                count++;
            }
            else{
                ans+=number[i];
            }
        }
        if(count==0) return number.erase(number.rfind(digit),1);
        ans+=number[number.length()-1];
        return ans;
    }
};