class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int>ans;
        int n=arr.size();
        int p=n;
        for(int i=0;i<n;i++){
            if(arr[i]==0){ ans.push_back(0);n--;}
            if(ans.size()<p) ans.push_back(arr[i]);
        }
        arr=ans;
        
    }
};