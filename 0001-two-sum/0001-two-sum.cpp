class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>res(2);
        int i=0;
        int j=0;
        int n=nums.size();
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    res[0]=i;
                    res[1]=j;
                    return res;
                }
            }
        }
        return res;
    }
};