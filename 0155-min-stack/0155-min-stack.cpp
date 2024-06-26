class MinStack {
public:
    stack<int>main;
    stack<int>mini;
    MinStack() {
        
    }
    
    void push(int val) {
        main.push(val);
        if(mini.empty()) mini.push(val);
        else mini.push(min(val,mini.top()));  
        
        
    }
    void pop() {
        mini.pop();
        main.pop();
    }
    int top() {
        return main.top();
    }
    
    int getMin() {
        return mini.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */