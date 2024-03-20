class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> arr;
        int n=intervals.size();
        int i=0;
        sort(intervals.begin(),intervals.end());
        for(i=0;i<n;i++)
        {
            if(arr.empty() || arr.back()[1]<intervals[i][0])
            {
                arr.push_back(intervals[i]);
            }
            else
            {
                arr.back()[1]=max(arr.back()[1],intervals[i][1]);
            }
        }
        return arr;
    }
};