class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        for(int j=n-1;j>=0;j--){
            digits[j]++;
            digits[j]=digits[j]%10;
            if(digits[j]!=0){
                return digits;
            }
        }
        digits.insert(digits.begin(), 1);//using the vector funtion
        return digits;
    }
};