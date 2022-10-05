#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> ve={1,2,3,4,5,6};
    // auto it=find(ve.begin(),ve.end(),5);

    // find stops at element present or else traverses whole vector
    auto it=find(ve.begin(),ve.end(),5);

    if(it==ve.end()){//element not present
        cout<<"0";
    }else{
        cout<<*it;
    }

    return 0;
}
