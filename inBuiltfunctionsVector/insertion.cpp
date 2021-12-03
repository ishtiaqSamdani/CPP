#include<bits/stdc++.h>
using namespace std;


void showVec(vector<int> a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

int main(){
    vector<int> ve={1,2,3,4};
    ve.insert(ve.begin()+1,4);//insert(pointer,ele)
    showVec(ve);
}