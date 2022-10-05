#include<bits/stdc++.h>
using namespace std;
void printVector(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int Bs(vector<int> a,int key){
    int i=0,j=a.size()-1;
    while(i<=j){
        int mid=(i+j)/2;
        if(a[mid]==key){
            return mid;
        }else if(a[mid]<key){
            i=mid+1;
        }else{
            j=mid-1;
        }
    }
    return -1;
}
int main()
{
    vector<int> a={1,2,3,4,5,6,7,8};
    cout<<Bs(a,9);
    return 0;
}