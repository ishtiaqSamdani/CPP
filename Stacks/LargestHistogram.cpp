#include<bits/stdc++.h>
using namespace std;
void show2DVec(vector<vector<int>> ve)
{
    for (int i = 0; i < ve.size(); i++)
    {
        for (int j = 0; j < ve[i].size(); j++)
        {
            cout << ve[i][j] << " ";
        }
        cout << "\n";
    }
}
vector<vector<int>> leftRightMin(vector<int> arr){

    // vector<int> mintoleftarr(arr.size(),-1);
    // vector<int> mintoRightarr(arr.size(),-1);
    vector<vector<int>> ans(2,vector<int>(arr.size(),-1));
    stack<int> st;
    for(int i=arr.size()-1;i>=0;i--){
        while(!st.empty() && arr[i]<arr[st.top()]){
            ans[0][st.top()]=i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        st.pop();
    }
    for(int i=0;i<arr.size();i++){
        while(!st.empty() && arr[i]<arr[st.top()]){
            ans[1][st.top()]=i;
            st.pop();
        }
        st.push(i);
    }

    return ans;
    
}
int LargerstHistogram(vector<int> a){
    vector<vector<int>> minnn=leftRightMin(a);
    int maxi=INT_MIN;
    for(int i=0;i<a.size();i++){
        if(minnn[1][i]==-1){
            minnn[1][i]=a.size();
        }
        maxi=max(maxi,(minnn[1][i]-minnn[0][i]-1)*a[i]);
    }
    return maxi;
}
int main()
{
    vector<int> v={2,4};
    cout<<LargerstHistogram(v);
    // show2DVec(leftRightMin(v));
    return 0;
}