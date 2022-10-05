#include<bits/stdc++.h>
using namespace std;
int binaryS(int arr[],int l,int r,int key){
        while(l<=r){
            cout<<l<<" "<<r<<endl;
            int mid=(l+r)/2;
            cout<<mid<<"\n";
            if(arr[mid]<key){
                l=mid+1;
            }
            else if(arr[mid]>key){
                r=mid-1;
            }
            else{
                return mid;
            }
        }
        return -1;
        
    }
int main()
{
    // int arr[]={1,4,6,7,8};
    // cout<<binaryS(arr,0,4,7);
    // return 0;

int A[] = {5, 6, 7, 8, 9, 10};
int pi=5;
int key=10;
    if(key>=A[0] && key<=A[pi]){
            cout<< binaryS(A,0,pi,key);
        }
        else{
            cout<< binaryS(A,pi+1,8,key);
            
        }
}