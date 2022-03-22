#include <bits/stdc++.h>
using namespace std;

void show2DVec(vector<vector<int>> ve)
{
    for (int i = 0; i < ve.size(); i++)
    {
        for (int j = 0; j < ve[i].size(); j++)
        {
            cout << ve[i][j];
        }
        cout << "\n";
    }
}
int main()
{
    vector<vector<int>> dp(4, vector<int>(4, -1));
    show2DVec(dp);
}