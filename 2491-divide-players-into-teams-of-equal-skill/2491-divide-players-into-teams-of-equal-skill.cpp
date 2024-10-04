class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        if(skill.size()==1) return -1;
        if(skill.size()==2) return skill[0]*skill[1];
        sort(skill.begin(),skill.end());
        int n=skill.size();
        long long ans=0;
        int opt=skill[0]+skill[n-1];
        for(int i=0;i<skill.size()/2;i++){
            if(skill[i]+skill[n-i-1]!=opt) return -1;
            ans+=(skill[i]*skill[n-i-1]);
        }
        return ans;
    }
};