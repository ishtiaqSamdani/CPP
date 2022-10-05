#include<bits/stdc++.h>
using namespace std;
void printVector(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> a={1,2,3,4,5,6,7,8};
    random_shuffle(a.begin(),a.end());
    printVector(a);
    return 0;
}