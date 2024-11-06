class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        for(int& num:arr) num+=__builtin_popcount(num)*100000;
        sort(arr.begin(),arr.end());
        for(int& num:arr) num%=100000;
        return arr;
    }
};