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
vector<vector<int>> setZeroes(vector<vector<int>>& matrix) {
        vector<int> is;
        vector<int> js;

        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    is.push_back(i);
                    js.push_back(j);
                }
            }
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(find(is.begin(), is.end(), i) != is.end() || find(js.begin(), js.end(), j) != js.end()){
                    matrix[i][j]=0;
                }
            }
        }
        return matrix;

}
int main()
{
    vector<vector<int>> matrix = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    show2DVec(setZeroes(matrix));
}