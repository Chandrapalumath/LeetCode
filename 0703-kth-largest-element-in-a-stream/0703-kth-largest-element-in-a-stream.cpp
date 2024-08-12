class KthLargest {
public:
    priority_queue<int,vector<int>,greater<>>min;
    int p;
    KthLargest(int k, vector<int>& nums) {
        p=k;
        for(auto n : nums) pushon(n);
    }
    
    int add(int val) {
        pushon(val);
        return min.top();
    }
    void pushon(int v){
        min.push(v);
        if(min.size()>p) min.pop();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */