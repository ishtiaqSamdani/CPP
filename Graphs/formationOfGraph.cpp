#include<bits/stdc++.h>

using namespace std;
// input:
// v e
// 3 2
// connected edges
// 1 2
// 1 3
const int N=1e5+10;
vector<int> gr[N];
int main(){
    int v,e;cin>>v>>e;

    for(int i=1;i<=v;i++){
        int in1,in2;
        cin>>in1>>in2;
        gr[in1].push_back(in2);
        gr[in2].push_back(in1);
    }   

    for(int i=0;i<5;i++){
        for(int it:gr[i]){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}