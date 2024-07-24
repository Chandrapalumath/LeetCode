class MapSum {
public:
    map<string,int>mp;
    MapSum() {
        
    }
    
    void insert(string key, int val) {
        mp[key]=val;
    }
    
    int sum(string prefix) {
        int ans=0;
        for(auto a : mp){
            if(a.first.find(prefix)==0) ans+=a.second;
        }
        return ans;
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */