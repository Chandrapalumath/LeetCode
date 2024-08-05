class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>mpp;
        for(auto a : arr){
            if(mpp.find(a)==mpp.end()) mpp[a]=1;
            else mpp[a]++;
        }
        for(auto p:arr){
            if(mpp[p]==1) if(k==1) return p; else k--;
        }
        return "";
    }
};