#include<bits/stdc++.h>
using namespace std;
void showVec(vector<int> a)
{
    cout << "size : " << a.size()
         << "\n";
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
}
vector<int> Greather(vector<int> ar){
    stack<pair<int,int>> st;
    vector<int> ans(ar.size(),-1);
    for(int i=0;i<ar.size();i++){
        while(!st.empty() && st.top().first<ar[i]){
            ans[st.top().second]=i;
            st.pop();
        }
        st.push({ar[i],i});
    }
    *(ans.end()-1)=0;//or ans.back();
 return ans;
}
int main()
{
    vector<int> ar={7,3,2,6,11,9,8,10,13};
    showVec(Greather(ar));
    
    return 0;
}