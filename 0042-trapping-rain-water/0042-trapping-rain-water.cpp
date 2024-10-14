class Solution {
public:
    int trap(vector<int>& height) {
        vector<int>lr;
        int n=height.size();
        if(n==1) return 0;
        int rr[n];
        lr.push_back(height[0]);
        for(int i=1;i<n;i++){
            lr.push_back(max(lr[i-1],height[i]));
        }
        rr[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            rr[i]= max(rr[i+1],height[i]);
        }
        int a=0;
        for(int i=0;i<n;i++){
            int c=min(lr[i],rr[i]);
            a+=(c-height[i]);
        }
        return a;
    }
};