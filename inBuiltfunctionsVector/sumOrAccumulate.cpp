#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> ve={7,3,2,3,1,4};
    cout<<accumulate(ve.begin(), ve.end(), 0);
    return 0;
}