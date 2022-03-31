// https://leetcode.com/problems/set-matrix-zeroes/

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        // up is vector indicating at which column 0 is present
        vector<int> up(matrix[0].size(), -1);
        // ri is vector indicating at which row 0 is present
        vector<int> ri(matrix.size(), -1);

        // filling 0 in up,ri accordingly
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (matrix[i][j] == 0)
                {
                    up[j] = 0;
                    ri[i] = 0;
                }
            }
        }

        // traverse up and make every col 0
        // traverse uri and make every row 0
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (up[j] == 0 || ri[i] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};