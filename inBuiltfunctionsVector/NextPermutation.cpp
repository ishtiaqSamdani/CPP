#include<bits/stdc++.h>
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
    vector<int> a={1,2,3};
    next_permutation(a.begin(),a.end());//puts next permutation in a

    do{
    showVec(a);
    }while(next_permutation(a.begin(),a.end()));//0 if already permution is computed
    return 0;
}