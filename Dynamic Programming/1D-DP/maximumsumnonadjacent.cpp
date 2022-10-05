#include<bits/stdc++.h>
using namespace std;
// int MaxNoNAdj(int ind,vector<int> a,int prevind){
//     // cout<<" ind: "<<ind<<" p: "<<prevind<<endl;
//     if(ind ==0 && prevind!=1) return a[ind];
//     else if(ind ==0 && prevind==1) return 0;
//     int p=INT_MIN;
//     if(prevind-ind!=1){
//         p= a[ind]+MaxNoNAdj(ind-1,a,ind);
//     }
//     int np= MaxNoNAdj(ind-1,a,prevind);
//     return max(p,np);
// }

int MaxNoNAdj(int ind,vector<int> a,vector<int>& dp){
    // cout<<" ind: "<<ind<<endl;
    if(ind==0) return a[ind];
    if(ind<0) return 0;
    if(dp[ind]!=-1) return dp[ind];
    int p=a[ind]+MaxNoNAdj(ind-2,a,dp);
    int np=MaxNoNAdj(ind-1,a,dp);
    return dp[ind]=max(p,np);
}
int main()
{
    vector<int> ar={2,1,4,9};
    int sz=ar.size();
    vector<int> dp(sz,-1);
    // cout<<MaxNoNAdj(ar.size()-1,ar,dp);
    dp[0]=ar[0];
    // int maxy=INT_MIN;
    for(int i=1;i<sz;i++){
        int p=ar[i];
        if(i-2>=0){
            p+=dp[i-2];
        }
        int np=dp[i-1];
        dp[i]=max(p,np);
        // maxy=max(maxy,dp[i]);
    }
    cout<<dp[sz-1];
    cout<<endl<<".........space optimization........."<<endl;

    //space optimzation

    int prev=ar[0],prev2=0;

    for(int i=1;i<sz;i++){
        int p=ar[i];
        if(i-2>=0){
            p+=prev2;
        }
        int np=prev;
        int curr=max(p,np);
        prev2=prev;
        prev=curr;
    }
    cout<<prev;

    return 0;
}