class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int i=0;
        int j=0;
        int count=0;
        int temp=0;
        temp=intervals[0][1];
        for(i=1;i<intervals.size();i++)
        {
            if(temp>intervals[i][0])
            {
                count++;
                if(temp>intervals[i][1])
                {
                    temp=intervals[i][1];
                }
            }
            else
            {
                temp=intervals[i][1];
            }
        }
        return count;
    }
};