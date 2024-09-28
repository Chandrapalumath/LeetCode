class MyCircularDeque {
public:
    vector<int>ans;
    int a=0,b=0,mcap=0;
    MyCircularDeque(int k) {
        mcap=k;
        ans.assign(k,0);
    }
    
    bool insertFront(int value) {
        if(isFull()) return false;
        if(!isEmpty()) a=(a-1+mcap)%mcap;
        ans[a]=value;
        b++;
        return true;
    }
    
    bool insertLast(int value) {
        if(isFull()) return false;
        int c=(a+b)%mcap;
        ans[c]=value;
        b++;
        return true;
    }
    
    bool deleteFront() {
        if(isEmpty()) return false;
        a=(a+1)%mcap;
        --b;
        return true;
    }
    
    bool deleteLast() {
        if(isEmpty()) return false;
        --b;
        return true;
    }
    
    int getFront() {
        return isEmpty()?-1:ans[a];
    }
    
    int getRear() {
        if(isEmpty()) return -1;
        int c=(a+b-1)%mcap;
        return ans[c];
    }
    
    bool isEmpty() {
        return b==0;
    }
    
    bool isFull() {
        return b==mcap;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */