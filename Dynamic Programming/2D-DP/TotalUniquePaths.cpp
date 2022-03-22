// https://www.codingninjas.com/codestudio/problems/total-unique-paths_1081470?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> dp(16, vector<int>(16, -1));

int rec(int i, int j)
{
    if (i == 0 && j == 0)
    {
        return 1;
    }
    if (i < 0 || j < 0)
    {
        return 0;
    }
    if (dp[i][j] != -1)
        return dp[i][j];
    int right = rec(i - 1, j);
    int up = rec(i, j - 1);

    return dp[i][j] = right + up;
}
int main()
{
    int m = 2, n = 2;
    cout << rec(m - 1, n - 1);
}