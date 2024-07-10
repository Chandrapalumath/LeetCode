class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>s;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="C"){
                s.pop();
            }
            else if(operations[i]=="D"){
                int p=s.top()*2;
                s.push(p);
            }else if(operations[i]=="+"){
                int p=s.top();
                s.pop();
                int q=s.top();
                s.push(p);
                s.push(p+q);
            }
            else{
                s.push(stoi(operations[i]));
            }
        }
        int sum=0;
        while(!s.empty()){
            sum+=s.top();
            s.pop();
        }
        return sum;
    }
};