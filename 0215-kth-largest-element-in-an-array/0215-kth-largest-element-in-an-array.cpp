class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        
        
        //First Approach is to sort it
        // sort(nums.begin(),nums.end());
        // return nums[n-k];
        
        //Second Approach to use priority Queue
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<n;i++){
            if(pq.size()<k){
                pq.push(nums[i]);
            }else if(pq.top()<nums[i]){
                pq.pop();
                pq.push(nums[i]);
            }
        }
        return pq.top();
    }
};