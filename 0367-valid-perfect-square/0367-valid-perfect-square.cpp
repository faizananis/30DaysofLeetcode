class Solution {
public:
    bool isPerfectSquare(int num) {
        int i=0;
        if(num==1)
        {
            return true;
        }
        for(i=2;i<=num/2;i++)
        {
            if(i==num/i&&num%i==0)
            {
                return true;
            }
            if(i>num/i)
            {
                return false;
            }
        }
        return false;
    }
};