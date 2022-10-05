#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec={4,3,2,6};
    priority_queue<int,vector<int>,greater<int>> pq(vec.begin(),vec.end());
    int ans=0;
    while(pq.size()>1){
        int min1=pq.top();
        pq.pop();
        int min2=pq.top();
        pq.pop();
        ans+=min1+min2;
        pq.push(min1+min2);
        // cout<<ans<<" ";
    }
    cout<<ans;
    return 0;
}