class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>set1(nums1.begin(),nums1.end());
        unordered_set<int>set2(nums2.begin(),nums2.end());
        int a1=0,a2=0;
        for(auto a : nums1){
            if(set2.count(a)) a1++;
        }
        for(auto a : nums2){
            if(set1.count(a)) a2++;
        }
        return {a1,a2};
    }
};