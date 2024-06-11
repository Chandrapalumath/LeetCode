class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int a=arr1.size();
        int b=arr2.size();
        vector<int>ans;
        for(int i=0;i<b;i++){
            int c=arr2[i];
            int count=0;
            for(int j=0;j<a;j++){
                if(arr1[j]==c){
                    count++;
                }
            }
            for(int j=0;j<count;j++){
                ans.push_back(c);
            }
        }
        vector<int>p;
        for(int i=0;i<a;i++){
            int target=arr1[i];
            int cnt = count(arr2.begin(), arr2.end(), target); 
            if(cnt==0){
                p.push_back(target);
            }
        }
        sort(p.begin(),p.end());
        int s=p.size();
        for(int i=0;i<s;i++){
            ans.push_back(p[i]);
        }
        return ans;
        
        
        
        
        
    }
};