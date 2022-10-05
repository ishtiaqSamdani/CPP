#include<bits/stdc++.h>
using namespace std;

void show2DVec(vector<vector<int>> ve)
{
    for (int i = 0; i < ve.size(); i++)
    {
        for (int j = 0; j < ve[i].size(); j++)
        {
            cout << ve[i][j]<<" ";
        }
        cout << "\n";
    }
}
vector<vector<int>> Transpose(vector<vector<int>> m){
    int sz=m.size();
    for(int i=0;i<sz;i++){
        for(int j=0;j<i;j++){
            swap(m[i][j],m[j][i]);
        }
    }
    return m;
}
int main()
{
    vector<vector<int>> m={{1,2,3},{4,5,6},{7,8,9}};
    show2DVec(m);
    m=Transpose(m);
    show2DVec(m);

    return 0;
}