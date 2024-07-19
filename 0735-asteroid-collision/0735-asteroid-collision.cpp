class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>s;
        for(int i=0;i<asteroids.size();i++){
            if(asteroids[i]>0) s.push(asteroids[i]);
            if(asteroids[i]<0){
                while(!s.empty() && s.top()>0 && s.top()< -(asteroids[i])) s.pop();
                if(!s.empty() && s.top()== -(asteroids[i])) s.pop();
                else if(s.empty() || s.top()<0) s.push(asteroids[i]);
            }
        }
        vector<int>ans;
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};