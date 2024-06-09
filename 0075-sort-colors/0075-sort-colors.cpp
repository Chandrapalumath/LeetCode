class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int a=0,b=0,c=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                a++;
            }else if(nums[i]==1){
                b++;
            }else{
                c++;
            }
        }
        b=a+b;
        c=b+c;
        for(int i=0;i<a;i++){
            nums[i]=0;
        }
        for(int i=a;i<b;i++){
            nums[i]=1;
        }
        for(int i=b;i<c;i++){
            nums[i]=2;
        }
        
    }
};