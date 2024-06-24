class Solution {
public:
    bool isValidSerialization(string preorder) {
        int n=preorder.length();
        stringstream ss(preorder);
        int a=1;
        vector<string>v;
        while(ss.good()){
            string substr;
            getline(ss, substr, ',');
            v.push_back(substr);
        } 
        for(int i=0;i<v.size();i++){
            if(--a<0) return false;
            if(v[i]!="#") a+=2;
        }
        return a==0;
    }
};