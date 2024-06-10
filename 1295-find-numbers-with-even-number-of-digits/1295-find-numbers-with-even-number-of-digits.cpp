class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int i=0,even=0,a=0;
        int n=nums.size();
        while(i<n){
            int b=0;
            a=nums[i];
            while(a){
                a/=10;
                b++;
            }
            if(b%2==0){
                even++;
            }
            i++;
        }
        return even;
    }
};