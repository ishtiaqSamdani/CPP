#include<bits/stdc++.h>
using namespace std;
int Bs(vector<int> arr,int key){
    int l=0,r=arr.size()-1;
    int mid=(l+r)/2;
    while(l<=r){
        mid=(l+r)/2;
        if(key==arr[mid]){
            return mid;
        }
        else if(key<arr[mid]){
            r=mid-1;
        }else{
            l=mid+1;
        }
    }
    return arr[mid];
}
int main()
{
    vector<int> arr={2,3,5,7,9,11,13};
    cout<<Bs(arr,4);
    return 0;
}

/*
0 1 2 3 4 5 6
2,3,5,7,9,11,13
s m e
2 3 5

s,m,e
5
e m,s
3  5

*/