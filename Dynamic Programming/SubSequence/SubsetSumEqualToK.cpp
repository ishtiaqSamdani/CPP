// https://www.codingninjas.com/codestudio/problems/subset-sum-equal-to-k_1550954?leftPanelTab=0

#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> dp(1001, vector<int>(1001, -1));
bool rec(int ind, int target, vector<int> arr)
{
    if (target == 0)
        return 0;

    if (ind == 0)
    {
        return arr[ind] == target;
    }
    if (dp[ind][target] != -1)
        return dp[ind][target];

    bool npk = rec(ind - 1, target, arr);
    int pk;
    if (arr[ind] <= target)
    {
        pk = rec(ind - 1, target - arr[ind], arr);
    }
    else
    {
        pk = false;
    }

    return dp[ind][target] = pk || npk;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4};
    int k = 4, n = 4;
    cout << rec(n - 1, k, arr);
    return 0;
}