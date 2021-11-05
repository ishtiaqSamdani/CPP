#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> ve={1,2,3,100,4,5,6};
    int mac=*max_element(ve.begin(),ve.end());
    cout<<mac<<"\n";
    int mic=*min_element(ve.begin(),ve.end());
    cout<<mic;
}