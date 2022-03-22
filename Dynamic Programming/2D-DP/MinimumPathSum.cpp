#include <bits/stdc++.h>
using namespace std;

int rec(int i, int j, vector<vector<int>> mat) // 1 ,2
{

    if (i == 0 && j == 0)
    {

        // cout << "i :" << i << " "
        //      << "j :" << j << "  " << mat[i][j] << endl;
        return mat[0][0];
    }
    if (i < 0 || j < 0)
    {
        // cout<<INT_MAX;
        // return INT_MAX didnt work it may cause of we are adding value INT_MAX and the binary format changed to negative
        return 100003; // so returned value greater than mat[n][m] in constraints
    }

    // cout << "i :" << i << " "
    //      << "j :" << j << "  " << mat[i][j] << endl;
    int up = mat[i][j] + rec(i - 1, j, mat);
    int left = mat[i][j] + rec(i, j - 1, mat); //

    return min(up, left);
}

int main()
{
    int m = 3, n = 2;
    vector<vector<int>> mat = {{5, 9, 6}, {11, 5, 2}};
    cout << rec(n - 1, m - 1, mat);
}