// https://www.codingninjas.com/codestudio/problems/maze-obstacles_977241?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> dp(16, vector<int>(16, -1));

int rec(int i, int j, vector<vector<int>> mat)
{
    if (i == 0 && j == 0)
    {
        return 1;
    }
    if (i < 0 || j < 0 || mat[i][j] == -1)
    {
        return 0;
    }
    if (dp[i][j] != -1)
        return dp[i][j];
    int right = rec(i - 1, j, mat);
    int up = rec(i, j - 1, mat);

    return dp[i][j] = right + up;
}
int main()
{
    int m = 2, n = 2;
    vector<vector<int>> mat = {{0, 0, 0},
                               {0, 1, 0},
                               {0, 0, 0}};
    cout << rec(m - 1, n - 1, mat);
}