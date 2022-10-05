#include<bits/stdc++.h>
using namespace std;
void printVector(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
}
vector<int> smallerToright(vector<int> arr){
    stack<int> st;
    vector<int> minarr(arr.size(),-1);
    for(int i=arr.size()-1;i>=0;i--){
        while(!st.empty() && arr[i]<arr[st.top()]){
            minarr[st.top()]=i;
            st.pop();
        }
        st.push(i);
    }
    return minarr;
}
int main()
{
    vector<int> v={6,2,5,4,5,1,6};
    printVector(smallerToright(v));
    return 0;
}