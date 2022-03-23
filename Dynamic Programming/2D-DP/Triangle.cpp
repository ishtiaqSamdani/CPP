// https://www.codingninjas.com/codestudio/problems/triangle_1229398?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos

#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> dp(1001, vector<int>(1001, -1));
int rec(int i, int j, vector<vector<int>> arr, int n)
{
    if (i == n - 1)
        return arr[n - 1][j];
    if (dp[i][j] != -1)
        return dp[i][j];
    int down = arr[i][j] + rec(i + 1, j, arr, n);
    int diag = arr[i][j] + rec(i + 1, j + 1, arr, n);
    return dp[i][j] = min(down, diag);
}

int main()
{
    int n = 4;
    vector<vector<int>> arr = {
        {2},
        {3, 4},
        {6, 5, 7},
        {4, 1, 8, 3}};
    cout << rec(0, 0, arr, n);
}