class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        int n = numRows;
        vector<vector<int>> ans(n);
        ans[0].push_back(1);
        for (int i = 1; i < n; i++)
        {
            ans[i].push_back(1);
            for (int j = 0; j < i - 1; j++)
            {
                ans[i].push_back(ans[i - 1][j] + ans[i - 1][j + 1]);
            }
            ans[i].push_back(1);
        }
        return ans;
    }
};