#include<bits/stdc++.h>
using namespace std;
int MaximumSumOFLeftSubArr(vector<int> ar,int left,int mid){
    int sum=0,maximus=ar[mid];
    for(int i=mid;i>=left;i--){
        sum+=ar[i];
        maximus=max(maximus,sum);
    }
    // cout<<"left sum:"<<maximus<<"\n";
    return maximus;
}
int MaximumSumOFRightSubArr(vector<int> ar,int mid,int right){
    int sum=0,maximus=ar[mid+1];
    for(int i=mid+1;i<=right;i++){
        sum+=ar[i];
        maximus=max(maximus,sum);
    }
    // cout<<"right sum:"<<maximus<<"\n";
    return maximus;
}
int MaximumSumSubArr(vector<int> ar,int left,int right){
    // cout<<"L :"<<left<<" R :"<<right<<"\n";
    if(left==right){
        return ar[left];
    }
    int mid=(left+right)/2;
    int ans=max(MaximumSumSubArr(ar,left,mid),MaximumSumSubArr(ar,mid+1,right));
    // cout<<"ans "<<ans<<"\n";
    int maximus= max(ans,MaximumSumOFLeftSubArr(ar,left,mid)+MaximumSumOFRightSubArr(ar,mid,right));
    // cout<<"returning :"<<maximus<<"\n";
    return maximus;
    }
int main()
{
    vector<int> arr={5,-6,3,4,-2,3,-3};
    cout<<MaximumSumSubArr(arr,0,arr.size()-1);
    return 0;
}
