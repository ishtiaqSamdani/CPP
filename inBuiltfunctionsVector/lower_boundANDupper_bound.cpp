#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr={0,2,5 ,6,8,12,15};//sorted
    int key=7;
    auto lowb=lower_bound(arr.begin(),arr.end(),key);//gives smallest value greather than key
    auto uppb=upper_bound(arr.begin(),arr.end(),key);//gives value greather than key
    cout<<lowb-arr.begin()<<"-"<<arr[lowb-arr.begin()]<<endl;
    cout<<uppb-arr.begin()<<"-"<<arr[uppb-arr.begin()];
    return 0;
}