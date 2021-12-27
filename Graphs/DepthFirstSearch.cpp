#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int> gr[N];
int visited[N];
void Dfs(int vertex){
    // write code if wanna do somthing after reaching a node
    cout<<vertex<<" ";
    visited[vertex]=1;
    for(int it:gr[vertex]){
        // write code if wanna do something reaching childs
        if(visited[it]) continue;
        Dfs(it);
    }
}
int main(){
    int v,e;cin>>v>>e;
    for(int i=0;i<e;i++){
        int in1,in2;cin>>in1>>in2;
        gr[in1].push_back(in2);
        gr[in2].push_back(in1);
    }
    Dfs(1);
}