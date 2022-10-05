#include<bits/stdc++.h>
using namespace std;
void showVec(vector<int> a)
{
    cout << "size : " << a.size()
         << "\n";
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
}
void MergingSortedArrs(vector<int> &arr,int left,int mid,int right){
    int i=left;
    int j=mid+1;
    vector<int> b;
    while(i<=mid && j<=right){
        if(arr[i]<arr[j]){
            b.push_back(arr[i]);
            i++;

        }
        else{
            b.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        b.push_back(arr[i]);
        i++;
    }
    while(j<=right){
        b.push_back(arr[j]);
        j++;
    }
    // vector<int>(arr.begin()+left,arr.begin()+right+1)=vector<int>(b.begin(),b.end());
    for(int i=left;i<=right;i++){
        arr[i]=b[i-left];
    }
}
void MergeSort(vector<int> &arr,int left,int right){
    if(left==right){
        return;
    }
    int mid=(left+right)/2;
    MergeSort(arr,left,mid);
    MergeSort(arr,mid+1,right);
    MergingSortedArrs(arr,left,mid,right);
}
int main()
{
    vector<int> arr={2,4,5,1,3,6,7,8};
    MergeSort(arr,0,arr.size()-1);
    showVec(arr);
    return 0;
}