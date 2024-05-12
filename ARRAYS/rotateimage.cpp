class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        vector<vector<int>> save = matrix;
        int n = matrix.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                save[i][j] = matrix[n - j - 1][i];
            }
        }
        matrix = save;
    }
};