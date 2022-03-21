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

int main()
{
    vector<int> ar1 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    ar1 = vector<int>(ar1.begin() + 2, ar1.begin() + 6);
    showVec(ar1);
}