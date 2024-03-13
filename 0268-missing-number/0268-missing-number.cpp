class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i=0;
        int j=0;
        for(i=0;i<nums.size();i++)
        {
            for(j=0;j<nums.size();j++)
            {
                if(nums[j]==i)
                {
                    break;
                }
            }
            if(j==nums.size())
            {
                return i;
            }
        }
        return i;
    }
};