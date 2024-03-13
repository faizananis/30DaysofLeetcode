class Solution {
public:
    int maximum(int indexValue, int max, int min)
    {
        int max_value=min;
        int arr[]={indexValue,max,min};
        if(indexValue==max&&max==min)
        {
            return max;
        }
        for(int i=0;i<3;i++)
        {
            if(max_value<arr[i])
            {
                max_value=arr[i];
            }
        }
        return max_value;
    }
    int minimum(int indexValue, int max, int min)
    {
        int min_value=max;
        int arr[]={indexValue,max,min};
        if(indexValue==max&&max==min)
        {
            return min;
        }
        for(int i=0;i<3;i++)
        {
            if(min_value>arr[i])
            {
                min_value=arr[i];
            }
        }
        return min_value;
    }
    int maxProduct(vector<int>& nums) {
        int curr_min=1;
        int curr_max=1;
        int max_prod=-11;
        int temp=0;
        int i=0;
        int n=nums.size();
        for(i=0;i<n;i++)
        {
            temp=curr_max;
            curr_max=maximum(nums[i],curr_max*nums[i],curr_min*nums[i]);
            curr_min=minimum(nums[i],temp*nums[i],curr_min*nums[i]);
            if(curr_max>max_prod)
            {
                max_prod=curr_max;
            }
            if(curr_min>max_prod)
            {
                max_prod=curr_min;
            }
        }
        return max_prod;
    }
};