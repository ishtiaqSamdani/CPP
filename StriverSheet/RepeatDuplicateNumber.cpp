#include<bits/stdc++.h>
using namespace std;
const int N=100001;
void printVector(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
vector<int> fr(N);
vector<int> RepDuplicate(vector<int> ve){
    vector<int> ans;
    for(int i=0;i<ve.size();i++){
        fr[ve[i]]++;
    }
    int mis=0;
    for(int i=1;i<ve.size()+1;i++){
        if(fr[i]==0 && mis==0){
            ans.push_back(i);
            mis=1;
        }
        else if(fr[i]==2){
            ans.push_back(i);
        }
    }
    return ans;
}

int main()
{
    vector<int> num={1,2,3,4,6,6,7,9,10};
    printVector(RepDuplicate(num));
    
    return 0;
}