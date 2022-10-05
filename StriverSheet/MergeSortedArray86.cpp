#include<bits/stdc++.h>
using namespace std;
void printVector(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i=0,j=0;
    vector<int> ans;
    while(i<m && j<n){
        if(nums1[i]<=nums2[j]){
            ans.push_back(nums1[i]);
            i++;
        }else{
            ans.push_back(nums2[j]);
            j++;
        }
    }

    while(i<m){
        ans.push_back(nums1[i]);
        i++;
    }
    while(j<n){
        ans.push_back(nums2[j]);
        j++;
    }
    return ans;
}
int main()
{
    vector<int> nums1={1,2,3};
    vector<int> nums2={2,5,6};
    printVector(merge(nums1,nums1.size(),nums2,nums2.size()));
    return 0;
}