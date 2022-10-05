#include<bits/stdc++.h>
using namespace std;

void show2Dvec(vector<vector<int>> mat){
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size();j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> mat;
    for(int i=0;i<n;i++){
        vector<int> v;
        for(int j=0;j<m;j++){
            int x;cin>>x;
            v.push_back(x);
        }
        mat.push_back(v);
    }
    vector<vector<int>> v=mat; 
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0 && j==0){
                v[i][j]=mat[i][j];
            }
            else if(i==0){
                v[i][j]=v[i][j-1]+mat[i][j];
            }
            else if(j==0){
                v[i][j]=v[i-1][j]+mat[i][j];
            }
            else{
                v[i][j]=v[i-1][j]+v[i][j-1]-v[i-1][j-1]+mat[i][j];
            }
        }
    }
    show2Dvec(v);



    return 0;
}