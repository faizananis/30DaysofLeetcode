class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<int> arr;
        vector<vector<int>> res;
        int i=0;
        int j=0;
        int n=0;
        int sum=0;
        int value=0;
        for(i=0;i<numRows;i++)
        {
            for(j=0;j<=i;j++)
            {
                if(j==0||j==i)
                {
                    arr.push_back(1);
                }
                else
                {
                    arr.push_back(res[i-1][j-1]+res[i-1][j]);
                }
            }
            res.push_back(arr);
            arr.clear();
        }
        return res;
    }
};