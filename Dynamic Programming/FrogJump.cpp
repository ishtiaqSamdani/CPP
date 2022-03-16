// https://www.codingninjas.com/codestudio/problems/frog-jump_3621012?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos
// input
// size=4

// arr=10 20 30 10

#include <bits/stdc++.h>

using namespace std;
vector<int> dp = vector<int>(5, -1);

int rec(int n, vector<int> arr)
{
    if (n == 0)
    {
        return 0;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    int left = rec(n - 1, arr) + abs(arr[n - 1] - arr[n]);
    int right = INT_MAX;
    if (n > 1)
    {
        right = rec(n - 2, arr) + abs(arr[n - 2] - arr[n]);
    }
    return dp[n] = min(left, right);
}

int main()
{
    int n = 4;
    vector<int> arr = {10, 20, 30, 10};
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << arr[i] << " ";
    //     /* code */
    // }

    cout << rec(n - 1, arr);
}