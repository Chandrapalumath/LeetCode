class Solution {
public:
    int minHeightShelves(vector<vector<int>>& books, int shelfWidth) {
        vector<int>ans(books.size()+1,INT_MAX);
        ans[0]=0;
        for(int i=0;i<books.size();i++){
            int a=0,b=0;
            for(int j=i;j>=0;j--){
                a+=books[j][0];
                if(a>shelfWidth) break;
                b=max(b,books[j][1]);
                ans[i+1]=min(ans[i+1],ans[j]+b);
            }
        }
        return ans.back();
    }
};