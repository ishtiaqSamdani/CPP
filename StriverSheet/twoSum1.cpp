#include<bits/stdc++.h>
using namespace std;
void printVector(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
}
vector<int> TwoSum(vector<int> arr,int t){
    unordered_map<int,int> mp;
    vector<int> ans;
    for(int i=0;i<arr.size();i++){
        if(mp.count(t-arr[i])==0){
            mp[arr[i]]=i;
        }else{
            ans.push_back(i);
            ans.push_back(mp[t-arr[i]]);
        }
    }
    return ans;
}
int main()
{
    vector<int> a={2,7,11,15};
    int t=9;
    printVector(TwoSum(a,t));

    
    return 0;
}