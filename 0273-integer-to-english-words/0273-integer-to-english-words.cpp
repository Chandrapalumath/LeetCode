class Solution {
public:
    vector<string>second{"","One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
    vector<string>third{"","","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
    string recursion(int num){
        string s;
        if(num<20) s=second.at(num);
        else if(num<100) s=third.at(num/10)+" "+second.at(num%10);
        else if(num<1000) s=recursion(num/100)+" Hundred "+recursion(num%100);
        else if(num<1000000) s=recursion(num/1000)+" Thousand "+recursion(num%1000);
        else if(num<1000000000) s=recursion(num/1000000)+" Million "+recursion(num%1000000);
        else s=recursion(num/1000000000)+" Billion "+recursion(num%1000000000);
        s.erase(0,s.find_first_not_of(' '));
        s.erase(s.find_last_not_of(' ')+1);
        return s;
    }
    string numberToWords(int num) {
        if(num==0) return "Zero";
        return recursion(num);
    }
};