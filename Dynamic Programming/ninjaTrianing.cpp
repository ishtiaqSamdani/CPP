// https://www.codingninjas.com/codestudio/problems/ninja-s-training_3621003?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos

#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> dp(100001, vector<int>(4, -1));

int rec(int ind, int last, vector<vector<int>> &arr)
{
    if (ind == 0)
    {
        int maxi = -1;
        for (int i = 0; i < 3; i++)
        {
            if (i != last)
            {
                maxi = max(maxi, arr[0][i]);
            }
        }
        return maxi;
    }
    if (dp[ind][last] != -1)
    {
        return dp[ind][last];
    }
    int maxi = -1;
    for (int i = 0; i < 3; i++)
    {
        if (i != last)
        {
            int po = arr[ind][i] + rec(ind - 1, i, arr);
            maxi = max(maxi, po);
        }
    }
    return dp[ind][last] = maxi;
}

int main()
{
    vector<vector<int>> ve = {{10, 40, 70},
                              {20, 50, 80},
                              {30, 60, 90}};
    int n = ve.size();
    cout << rec(n - 1, 3, ve);
}
