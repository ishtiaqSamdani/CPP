#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> generate(int numRows) {
    vector<vector<int>> ve;

    for(int i=0;i<numRows;i++){
        vector<int> a(i+1);
        a[0]=a[i]=1;
        ve.push_back(a);
        for(int j=1;j<i;j++){
            ve[i][j]=ve[i-1][j-1]+ve[i-1][j];
        }
    }
    return ve;
}
int main()
{
    return 0;
}
