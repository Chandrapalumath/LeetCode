class Solution {
public:
    long inorder(long long x,long long n){
        if(n==0) return 1;
        if(n%2==1) return x*inorder(x,n-1)%1'000'000'007;
        return inorder(x*x%1'000'000'007,n/2);
    }
    int countGoodNumbers(long long n) {
        return inorder(5*4,n/2) * (n%2==0?1:5) % 1'000'000'007;
    }
};
/*
for n=2;
21
23
25
27
29
41
43
45
47
49
61
63
65
67
69
81
83
85
87
89
27-7=20 combination
*/