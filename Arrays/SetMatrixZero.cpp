class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        bool firstCol = false;
        int m = matrix[0].size();
        for (int i = 0; i < n; i++)
        {
            if (matrix[i][0] == 0)
                firstCol = true;
            for (int j = 1; j < matrix[0].size(); j++)
            {
                if (matrix[i][j] == 0)
                {
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j < m; j++)
            {
                if (matrix[0][j] == 0 || matrix[i][0] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }
        if (matrix[0][0] == 0)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                matrix[0][j] = 0;
            }
        }
        if (firstCol)
        {
            for (int i = 0; i < matrix.size(); i++)
            {
                matrix[i][0] = 0;
            }
        }
    }
};