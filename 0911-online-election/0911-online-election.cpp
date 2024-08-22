class TopVotedCandidate {
public:
    vector<int>lead;
    vector<int>time;
    TopVotedCandidate(vector<int>& persons, vector<int>& times) {
        time=times;
        lead.resize(persons.size());
        vector<int>cnt(persons.size());
        int c=0;
        for(int i=0;i<persons.size();i++){
            ++cnt[persons[i]];
            if(cnt[c]<=cnt[persons[i]]) c=persons[i];
            lead[i]=c;
        }
    }
    
    int q(int t) {
        return lead[upper_bound(time.begin(),time.end(),t)-time.begin()-1];
    }
};

/**
 * Your TopVotedCandidate object will be instantiated and called as such:
 * TopVotedCandidate* obj = new TopVotedCandidate(persons, times);
 * int param_1 = obj->q(t);
 */