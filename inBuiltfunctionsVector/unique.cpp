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
    //sorting is important
    vector<int> ve = {1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 5, 5};
    unique(ve.begin(), ve.end()); // 1 2 3 4 5 3 3 3 4 4 4 5 5 5 5 5

    vector<int> ve2 = {1,2,3,1};
    sort(ve2.begin(),ve2.end());//sorting is important
    auto res = unique(ve2.begin(), ve2.end()); // res is the pointer pointing towards last unique value
    // cout << *res;                              // prints 3 no idea why
    vector<int> p = vector<int>(ve2.begin(), res);
    showVec(p);

    return 0;
}