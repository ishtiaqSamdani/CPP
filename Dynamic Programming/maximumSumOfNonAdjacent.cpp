// https://www.codingninjas.com/codestudio/problems/maximum-sum-of-non-adjacent-elements_843261?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos

// leetCode:   https://leetcode.com/problems/house-robber/submissions/

#include <bits/stdc++.h>

using namespace std;

vector<int> dp = vector<int>(10000001, -1);
int rec(int ind, vector<int> &arr)
{
    if (ind == 0)
        return arr[0];
    if (ind < 0)
        return 0;
    if (dp[ind] != -1)
        return dp[ind];
    int pk = arr[ind] + rec(ind - 2, arr);
    int npk = 0 + rec(ind - 1, arr);

    return dp[ind] = max(pk, npk);
}
int main()
{
    vector<int> arr = {2, 1, 4, 9};
    int n = arr.size();
    cout << (rec(n - 1, arr));
}