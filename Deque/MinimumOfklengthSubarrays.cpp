#include<bits/stdc++.h>
using namespace std;
void printV(vector<int> v){
    for(auto i:v){
        cout<<i<<" ";
    }
}
vector<int> MinimumKLengthSubarrays(vector<int> arr,int k){
    deque<int> dq;
    vector<int> ans;
    for(int i=0;i<arr.size();i++){
        if(!dq.empty() && i-dq.front()==3){
            dq.pop_front();
        }
        while(!dq.empty() && arr[i]<arr[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i);
        if(i>1){
            ans.push_back(arr[dq.front()]);
        }
    }
    return ans;
}
int main()
{
    vector<int> ve={-7,9,2,4,-1,5,6,7,1};//-7,2,-1,-1,-1,5,1
    int k=3;
    printV(MinimumKLengthSubarrays(ve,k));
}