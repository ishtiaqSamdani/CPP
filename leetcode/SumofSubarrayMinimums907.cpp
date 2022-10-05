#include<bits/stdc++.h>
using namespace std;
void print2d(vector<vector<int>> &v){
    for(auto &i:v){
        for(auto &j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
// print vector
void print(vector<int> &v){
    for(auto &i:v){
        cout<<i<<" ";
    }
    cout<<endl;
}
void subseq(vector<int>& arr,int i,vector<int> subarra,vector<vector<int>>& ans) {
    if(i==arr.size()){
        ans.push_back(subarra);
        return;
    }
    subseq(arr,i+1,subarra,ans);
    subarra.push_back(arr[i]);
    subseq(arr,i+1,subarra,ans);
}

int main()
{
    vector<int> arr={3,1,2,4};
    vector<vector<int>> ans;
    vector<int> subb;
    subseq(arr,0,subb,ans);
    // print2d(ans);
    int sum=0;
    for(int i=0;i<ans.size();i++){
        if(ans[i].size()==0){
            sum+=0;
        }
        else{
        sum+=*min_element(ans[i].begin(),ans[i].end());
        }
    }
    // cout<<sum<<"adzfg";
    // return 0;

    // binary form of 1 to 10
        auto a =bitset<4>();
        cout<<a.size()<<endl;
        // type of a

}