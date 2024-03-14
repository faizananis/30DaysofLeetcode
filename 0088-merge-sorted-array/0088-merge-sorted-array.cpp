class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        int j=0;
        int temp=0;
        int k=0;
        int size=m+n;
        for(i=0;i<size;i++)
        {
            if(i>=m&&j<n)
            {
                nums1[i]=nums2[j];
                j++;
            }
            else if(i<m&&j<n)
            {
                if(nums1[i]>nums2[j])
                {
                    for(k=m;k>i;k--)
                    {
                        nums1[k]=nums1[k-1];
                    }
                    m++;
                    nums1[i]=nums2[j];
                    j++;
                }
            }
        }   
    }
};