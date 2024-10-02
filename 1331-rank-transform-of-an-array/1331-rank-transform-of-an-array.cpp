class Solution {
public:
    vector<int>c;
    vector<int> arrayRankTransform(vector<int>& arr) {
        if(arr.size()<1) return {};
        c=arr;
        sort(arr.begin(),arr.end());
        int n=arr.size();
        unordered_map<int,int>out(n);
        int prev=1;
        out[arr[0]]=prev;
        for(int i=1;i<n;i++){
            if(arr[i-1]==arr[i]){
                out[arr[i]]=prev;
            }else{
                out[arr[i]]=++prev;
            }
        }
        for(int i=0;i<n;i++){
            arr[i]=out[c[i]];
        }
        return arr;
    }
};