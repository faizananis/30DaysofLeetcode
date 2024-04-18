class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=0;
        int k=0;
        int n=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]==32)
            {
                k=1;
                continue;
            }
            if(k==1)
            {
                n=0;
                k=0;
            }
            n++;
        }
        return n;
    }
};