#include<bits/stdc++.h>
using namespace std;
const int N=1e5+1;
vector<int> fr(N);
int findDuplicate(vector<int>& nums) {
    for(int i=0;i<nums.size();i++){
        fr[nums[i]]++;
    }
    for(int i=0;i<N;i++){
        if(fr[i]>=2){
            return i;
        }
    }
    return -1;
}        
int main()
{
    return 0;
}