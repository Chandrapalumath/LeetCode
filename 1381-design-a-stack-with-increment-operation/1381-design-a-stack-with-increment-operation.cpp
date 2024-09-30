class CustomStack {
public:
    int s;
    stack<int>st;
    CustomStack(int maxSize) {
        s=maxSize;
    }
    
    void push(int x) {
        if(st.size()<s) st.push(x);
    }
    
    int pop() {
        if(st.size()==0) return -1;
        int s=st.top();
        st.pop();
        return s;
    }
    
    void increment(int k, int val) {
        stack<int>s1;
        while(!st.empty()){
            if(st.size()<=k) s1.push(st.top()+val);
            else s1.push(st.top());
            st.pop();
        }
        while(!s1.empty()){
            st.push(s1.top());
            s1.pop();
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */