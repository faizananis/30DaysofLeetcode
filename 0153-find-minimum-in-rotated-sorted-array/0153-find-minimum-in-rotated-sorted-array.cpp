class Solution {
public:
    int findMin(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        int left=0;
        int right=0;
        if(n==1)
        {
            return nums[0];
        }
        for(i=0;i<n;i++)
        {
            left=0;
            right=0;
            if(i*2+1<n)
            {
                if(nums[i]>nums[i*2+1])
                {
                    left=1;
                }
            }
            if(i*2+2<n)
            {
                if(nums[i]>nums[i*2+2])
                {
                    right=1;
                }
            }
            if(i*2+1>=n&&i*2+2>=n)
            {
                return nums[0];
            }
            if(left==1&&right==1)
            {
                if(nums[i*2+1]<nums[i*2+2])
                {
                    return nums[i*2+1];
                }
                else if(nums[i*2+2]<nums[i*2+1])
                {
                    return nums[i*2+2];
                }
                else
                {
                    return nums[i*2+1];
                }
            }
            else if(left==1)
            {
                return nums[i*2+1];
            }
            else if(right==1)
            {
                return nums[i*2+2];
            }
        }
        return nums[0];
    }
};