class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int i=0;
        vector<vector<int>> arr;
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        for(i=0;i<n;i++)
        {
            if(arr.empty() || arr.back()[1] < intervals[i][0])
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