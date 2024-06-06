class Solution {
public:
    int maxArea(vector<int>& height) {
        int e=height.size()-1;
        int s=0,maxcap=0,min=-1,w,cap;
        while(s<e){
            min=-1;
            height[s]>height[e]? min=height[e]:min=height[s];
            w=e-s;
            cap=min*w;
            if(cap>maxcap){
                maxcap=cap;
            }
            height[s]>height[e]? e--:s++;
        }
        return maxcap;
    }
};