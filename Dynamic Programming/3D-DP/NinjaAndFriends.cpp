// https://www.codingninjas.com/codestudio/problems/ninja-and-his-friends_3125885?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos

#include <bits/stdc++.h>
using namespace std;
// 3D-DP🐱‍🏍
vector<vector<vector<int>>> dp(51, vector<vector<int>>(51, vector<int>(51, -1)));
int rec(int i, int j1, int j2, vector<vector<int>> arr, int r, int c)
{
    if (j1 < 0 || j1 > c - 1 || j2 < 0 || j2 > c - 1)
    {
        return -1e9;
    }
    if (i == r - 1)
    {
        if (j1 == j2)
        {
            return arr[i][j1];
        }
        else
        {
            return arr[i][j1] + arr[i][j2];
        }
    }
    if (dp[i][j1][j2] != -1)
        return dp[i][j1][j2];
    int maxi = -1;
    for (int al = -1; al <= 1; al++)
    {
        for (int bob = -1; bob <= 1; bob++)
        {
            int val;
            if (j1 == j2)
            {
                val = arr[i][j1];
            }
            else
            {
                val = arr[i][j1] + arr[i][j2];
            }
            val += rec(i + 1, j1 + al, j2 + bob, arr, r, c);
            maxi = max(maxi, val);
        }
    }
    return dp[i][j1][j2] = maxi;
}
int main()
{
    int r = 3, c = 4;
    vector<vector<int>> arr = {
        {2, 3, 1, 2},
        {3, 4, 2, 2},
        {5, 6, 3, 5}};
    cout << rec(0, 0, c - 1, arr, r, c);
    return 0;
}