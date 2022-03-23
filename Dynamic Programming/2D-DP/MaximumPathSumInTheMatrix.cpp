// https://www.codingninjas.com/codestudio/problems/maximum-path-sum-in-the-matrix_797998?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos

#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> dp(101, vector<int>(101, -1));
int rec(int i, int j, vector<vector<int>> arr, int n, int m)
{
    if (j < 0 || j > m - 1)
    {
        return -1e9;
    }
    if (i == 0)
    {
        return arr[i][j];
    }
    if (dp[i][j] != -1)
        return dp[i][j];

    int up = arr[i][j] + rec(i - 1, j, arr, n, m);
    int leftDiag = arr[i][j] + rec(i - 1, j - 1, arr, n, m);
    int rightDiag = arr[i][j] + rec(i - 1, j + 1, arr, n, m);

    return dp[i][j] = max(up, max(leftDiag, rightDiag));
}
int main()
{
    // vector<vector<int>> arr = {
    //     {1, 2, 10, 4},
    //     {100, 3, 2, 1},
    //     {1, 1, 20, 2},
    //     {1, 2, 2, 1},
    // };
    vector<vector<int>> arr = {
        {10, 2, 3},
        {3, 7, 2},
        {8, 1, 5},
    };
    int n = 3, m = 3;
    int maxi = -1;
    for (int j = 0; j < m; j++)
    {
        int Msum = rec(n - 1, j, arr, n, m);
        maxi = max(Msum, maxi);
    }

    cout << maxi;
    return 0;
}