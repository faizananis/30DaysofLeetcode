class Solution {
public:
    int fib(int n) {
        if(n==0)
        {
            return 0;
        }
        int a=0;
        int b=1;
        int c=0;
        for(int i=0;i<n;i++)
        {
            a=b;
            b=c;
            c=a+b;
        }
        return c;
    }
};