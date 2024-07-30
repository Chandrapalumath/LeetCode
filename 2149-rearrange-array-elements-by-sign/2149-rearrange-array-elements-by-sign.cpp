class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        queue<int>q1;
        queue<int>q2;
        for(int a:nums){
            if(a>=0) q1.push(a);
            else q2.push(a);
        }
        vector<int>ans;
        while(!q1.empty()){
            ans.push_back(q1.front());q1.pop();
            ans.push_back(q2.front());q2.pop();
        }
        return ans;
    }
};