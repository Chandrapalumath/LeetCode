class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int ,int>mp;
        for(int i=0;i<arr.size();i++){
            if(mp.find(arr[i])==mp.end()){
                mp[arr[i]] = 1;
            }else{
                mp[arr[i]]++;
            }
        }
        int max=-1;
        for(int i=0;i<arr.size();i++){
            if(mp[arr[i]]==arr[i]){
                if(arr[i]>max){
                    max=arr[i];
                }
            }
        }
        return max;
    }
};