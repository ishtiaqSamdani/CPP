#include<bits/stdc++.h>
using namespace std;

void showVec(vector<int> a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

void permu(vector<int> a,int count,vector<int> a2){
    if(count==a.size()){
        showVec(a2);
        return;
    }
    if(count==0){
        a2.push_back(a[count]);
        permu(a,count+1,a2);
    }else{
        int countIn=count;

        while(countIn>-1){
            vector<int> a2Dup=a2;
            a2Dup.insert(a2Dup.begin()+countIn,a[count]);
            permu(a,count+1,a2Dup);
            countIn--;
        }
    }


}

int main(){
    vector<int> ve={1,2,3};
    permu(ve,0,{});
}