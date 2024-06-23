class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1;
        vector<int>p;
        int n=nums2.size();
        int i=0;
        while(i<n){
            s1.insert(nums2[i]);
            i++;
        }
        for(auto a: nums1){
            if(s1.erase(a)) p.push_back(a);
        }
        return p;
    }
};