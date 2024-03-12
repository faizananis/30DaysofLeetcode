class Solution {
public:
    bool isPalindrome(int x) {
        string str=to_string(x);
        int n=str.length();
        int i=0;
        int j=n-1;
        for(int i=0;i<j;i++)
        {
            if(str[i]!=str[j])
            {
                return false;
            }
            j--;
        }
        return true;
    }
};