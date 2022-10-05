#include<bits/stdc++.h>
using namespace std;
int NumberOfTransportations(vector<int> a,int weight){
    int cnt=0;
    int preW=0;
    for(int i=0;i<a.size();i++){
        preW+=a[i];
        if(preW>weight){
            cnt++;
            preW=a[i];
        }
    }
    cnt++;
    return cnt;
}
int MinTransportation(vector<int> a,int k){
    int i=0,j=accumulate(a.begin(),a.end(),0);
    int ans;
    while(i<=j){
        int mid=(i+j)/2;
        int NT=NumberOfTransportations(a,mid);
        if(NT>k){
            i=mid+1;
        }
        else{
            ans=mid;
            j=mid-1;
        }
    }
}
int main()
{
    vector<int> ve={7,3,2,3,1,4};
    int k=3;
    cout<<MinTransportation(ve,k);
    return 0;
}