//https://www.geeksforgeeks.org/sum-triangle-from-array/

#include<bits/stdc++.h>
using namespace std;

void showVec(vector<int> a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

vector<int> SumT(vector<int> a){
    vector<int> a2={};
    for(int i=0;i<a.size()-1;i++){
        a2.push_back(a[i]+a[i+1]);
    }
    return a2;
}

void SumOfTriangle(vector<int> a){// 1 2 3 4 5,3 5 7 9,8 12 16,20 28, 48
    if(a.size()==1){
        return;
    }
    a=SumT(a);
    SumOfTriangle(a);//3 5 7 9, 8 12 16
    showVec(a);
}

int main(){
    vector<int> ve={1,2,3,4,5};
    SumOfTriangle(ve);
    showVec(ve);
}