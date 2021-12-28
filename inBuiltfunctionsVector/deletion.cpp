#include<bits/stdc++.h>
using namespace std;

void showVec(vector<int> a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

int main(){
    vector<int> ve={1,2,3,4,5};

    ve.erase(ve.begin(),ve.begin()+2);//1,2 is removed 3 is not included
    showVec(ve);

    vector<int> ve1={1,2,3,4,5};

    ve1.erase(ve1.end()-1);//to erase last value
    ve1.erase(ve1.begin());//erase start value
    showVec(ve1);



}