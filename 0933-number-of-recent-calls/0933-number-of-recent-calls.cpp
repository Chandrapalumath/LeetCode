class RecentCounter {
public:
    queue<int>s;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        s.push(t);
        cout<<s.front()<<" ";
        while((t-s.front())>3000){
            cout<<"hii";
            s.pop();
        }
        return s.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */