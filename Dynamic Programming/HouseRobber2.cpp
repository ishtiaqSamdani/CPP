// https://www.codingninjas.com/codestudio/problems/house-robber_839733?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos
// leetcode: https://leetcode.com/problems/house-robber-ii/submissions/

#include <bits/stdc++.h>
using namespace std;

void showVec(vector<int> a)
{
    cout << "size : " << a.size()
         << "\n";
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
}

vector<int> dp = vector<int>(101, -1);

int rec(int ind, vector<int> arr)
{
    if (ind == 0)
        return arr[ind];

    if (ind < 0)
        return 0;

    if (dp[ind] != -1)
        return dp[ind];

    int pk = arr[ind] + rec(ind - 2, arr);
    int npk = 0 + rec(ind - 1, arr);
    cout << "ind =" << ind << " pk npk =" << pk << " " << npk << " " << endl;
    return dp[ind] = max(pk, npk);
}

int main()
{
    vector<int> ar = {1, 2, 3};
    vector<int> ar2 = vector<int>(ar.begin(), ar.end() - 1);
    showVec(ar2);
    int n2 = ar2.size();
    vector<int> ar3 = vector<int>(ar.begin() + 1, ar.end());
    showVec(ar3);
    int n3 = ar3.size();
    cout << "ar2 " << rec(n3 - 1, ar2) << endl;
    dp = vector<int>(101, -1);
    cout << "ar3 " << rec(n3 - 1, ar3) << endl;
}