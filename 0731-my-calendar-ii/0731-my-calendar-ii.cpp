class MyCalendarTwo {
public:
    map<int,int>mpp;
    MyCalendarTwo() {
        
    }
    
    bool book(int start, int end) {
        int ae=0;
        mpp[start]++;
        mpp[end]--;
        for(auto a:mpp){
            ae+=a.second;
            if(ae>2){
                if(--mpp[start]==0) mpp.erase(start);
                if(++mpp[end]==0) mpp.erase(end);
                return false;
            }
        }
        return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */