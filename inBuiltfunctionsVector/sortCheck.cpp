#include<bits/stdc++.h>
using namespace std;

string CheckSort(vector<int> ve){
    vector<int> ve2=ve;
    sort(ve.begin(),ve.end());
    int cnt=0;
    int ind1,ind2;
    for(int i=0;i<ve.size();i++){
        if(ve[i]!=ve2[i]){
            if(cnt==0){
                ind1=i;
            }
            else if(cnt==1){
                ind2=i;
            }
            cnt++;
        }
    }

    if(cnt>2){
        return("NO");
    }

    if((ind1+ind2) & 1==1){
        return "YES";
    }
}
int main()
{
    vector<int> arr={2,3,5,6,2};
    cout<<CheckSort(arr);
}


