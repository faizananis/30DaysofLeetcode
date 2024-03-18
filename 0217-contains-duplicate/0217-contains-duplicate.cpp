class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int i=0;
        int j=0;
        int temp=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        temp=nums[0];
        for(i=1;i<n;i++)
        {
            if(temp>=nums[i])
            {
                return true;
            }
            temp=nums[i];
        }
        return false;
    } 
};