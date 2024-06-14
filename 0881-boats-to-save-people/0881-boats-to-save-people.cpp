class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n=people.size();
        int b=0;
        int s=0;
        int e=n-1;
        sort(people.begin(),people.end());
        while(s<=e){
            if(s==e){
                b++;
                break;
            }
            if(people[e]==limit){
                b++;
                e--;
            }else if(people[e]+people[s]<=limit){
                b++;
                s++;
                e--;
            }else{
                b++;e--;
            }
        }
        return b;
    }
};