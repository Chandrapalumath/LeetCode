class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        vector<int>freq(26,0);
        for(int i=0;i<s.size();i++) freq[s[i]-'a']++;
        priority_queue<pair<int,int>>maxheap;
        for(int i=0;i<26;i++) if(freq[i]>0) maxheap.push(make_pair(i,freq[i]));
        string res;
        while(!maxheap.empty()){
            pair<int,int>curr=maxheap.top();
            maxheap.pop();
            char c='a'+curr.first;
            int count=min(curr.second,repeatLimit);
            curr.second-=count;
            res.append(count,c);
            if(curr.second>0){
                if(maxheap.empty()) break;
                pair<int,int>next=maxheap.top();
                maxheap.pop();
                char nc='a'+next.first;
                res.push_back(nc);
                next.second--;
                if(next.second>0) maxheap.push(next);
                maxheap.push(curr);
            }
        }
        return res;
    }
};