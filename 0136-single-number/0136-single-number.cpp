class Solution {
public:
    int singleNumber(vector<int>& nums) {
    int flag=0;
    for(auto i=nums.begin();i!=nums.end();++i)
    {
        flag=0;
        for(auto j=nums.begin();j!=nums.end();++j)
        {
            if(*i==*j)
            {
                flag++;
            }
        }
        if(flag==1)
        {
            return *i;
        }
    }
    return 0;
    }
};