class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int>a1(nums1.begin(),nums1.end());
        set<int>a2(nums2.begin(),nums2.end());
        vector<int>a;
        vector<int >b;
        //Checking for first one
        int count=0;
        for(int p : a1){
            for(int s : a2){
                if(p==s) count++;
            }
            if(count!=1){
                a.push_back(p);
                
            }
            count=0;
        }
        //Checking for second one
        for(int p : a2){
            for(int s : a1){
                if(p==s) count++;
            }
            if(count!=1){
                b.push_back(p);
                
            }
            count=0;
        }
        return {a,b};
    }
};