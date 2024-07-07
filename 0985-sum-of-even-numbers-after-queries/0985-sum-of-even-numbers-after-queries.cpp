class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        long long int even = 0;
        for(int i=0;i<nums.size();i++) if(nums[i]%2==0) even+=nums[i];
        vector<int>ans;
        for(int i=0;i<queries.size();i++){
            if(nums[queries[i][1]]%2==0){
                even-=nums[queries[i][1]];
                nums[queries[i][1]]+=queries[i][0];
                if(nums[queries[i][1]]%2==0) even+=nums[queries[i][1]]; 
            }else{
                nums[queries[i][1]]+=queries[i][0];
                if(nums[queries[i][1]]%2==0) even+=nums[queries[i][1]];
            }
            ans.push_back(even);
        }
        return ans;
    }
};