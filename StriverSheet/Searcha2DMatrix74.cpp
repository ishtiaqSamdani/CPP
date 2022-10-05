#include<bits/stdc++.h>
using namespace std;
bool bs(vector<int> a,int k){
    int i=0,j=a.size()-1,mid;
    while(i<=j){
        mid=(i+j)/2;
        if(a[mid]==k){
            return 1;
        }
        else if(k<a[mid]){
            j=mid-1;
        }
        else{
            i=mid+1;
        }
    }
    return 0;
}
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    for(int i=0;i<matrix.size();i++){
        if(bs(matrix[i],target)){
            return 1;
        }
    }
    return 0;
}
int main()
{
    return 0;
}