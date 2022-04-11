// https://leetcode.com/problems/shift-2d-grid/

// idea:first conert the rowINdex(i) and colIndex(j) to 1D postion from which we can extract easly

class Solution
{
public:
    vector<vector<int>> shiftGrid(vector<vector<int>> &grid, int k)
    {
        int m = grid.size();
        int n = grid[0].size();
        // taking a grid of m*n
        vector<vector<int>> grid2(m, vector<int>(n, 0));
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                // converting the i and j and making it the index in 1D "i*n+j"(n is number of col)
                // and k that is number of steps forward
                //% to not exceed boundary
                int next1Dpos = ((i * n + j) + k) % (m * n);
                // converting new 1D position to newi and newj
                int newi = next1Dpos / n;
                int newj = next1Dpos % n;
                grid2[newi][newj] = grid[i][j];
            }
        }
        return grid2;
    }
};