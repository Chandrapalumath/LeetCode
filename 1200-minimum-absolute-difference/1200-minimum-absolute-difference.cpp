class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        if(arr.size()<3) return {{arr[0],arr[1]}};
        vector<vector<int>> nums;
        int min=abs(arr[0]-arr[1]);
        for(int i=0;i<arr.size()-1;i++){
            if(abs(arr[i]-arr[i+1])<min) min=abs(arr[i]-arr[i+1]);
        }
        for(int i=0;i<arr.size()-1;i++){
            if(abs(arr[i]-arr[i+1])==min) nums.push_back({arr[i],arr[i+1]});
        }
        return nums;
    }
};