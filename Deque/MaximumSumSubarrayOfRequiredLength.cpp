#include<bits/stdc++.h>
using namespace std;
void printV(vector<int> v){
    for(auto i:v){
        cout<<i<<" ";
    }
}
void printQ(queue<int> q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<"\n";
}
int MaximumSumSubarrayOfRequiredLength(vector<int> arr,int k){
    queue<int> q;
    int sum=0;
    int Maz=INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(!q.empty() && i-q.front()==k){
            sum-=arr[q.front()];
            q.pop();
        }
        q.push(i);
        sum+=arr[q.back()];
        if(i>=k-1){
        Maz=max(Maz,sum);
        }
        // cout<<i<<" "<<sum<<" "<<Maz<<endl;
        // printQ(q);
    }
    return Maz;
}
int main()
{
    vector<int> ve={2,-9,7,-2,8,-1,1};//-7,2,-1,-1,-1,5,1
    int A=2,B=4;
    vector<int> ans;
    for(int i=A;i<=B;i++){
        ans.push_back(MaximumSumSubarrayOfRequiredLength(ve,i));
    }
    cout<<*max_element(ans.begin(),ans.end());

}