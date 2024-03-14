class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t reverse=n;
        int count=31;
        n>>=1;
        while(n)
        {
            reverse<<=1;
            reverse=reverse|n & 1;
            n>>=1;
            count--;
        }
        reverse<<=count;
        return reverse;
    }
};