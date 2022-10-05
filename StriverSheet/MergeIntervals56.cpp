#include<bits/stdc++.h>
using namespace std;
void show2DVec(vector<vector<int>> ve)
{
    for (int i = 0; i < ve.size(); i++)
    {
        for (int j = 0; j < ve[i].size(); j++)
        {
            cout << ve[i][j]<<" ";
        }
        cout << "\n";
    }
}
vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<int> m={intervals[0][0],intervals[0][1]};
        vector<vector<int>> ans;
        for(int i=1;i<intervals.size();i++){

            if(m[1]-intervals[i][0]>=0){
                m[1]=max(intervals[i][1],m[1]);
            }
            else{
                ans.push_back(m);
                m=intervals[i];
            }
        }
            ans.push_back(m);
        return ans;
        
}
int main()
{
    // vector<vector<int>> m= { {1,3 }, {2,6 }, {8,10 }, {15,18 } };
    // m=merge(m);
    // show2DVec(m);

    string m ="bb";
    string n ="abc";
    bool c=m<n;
    cout<<c;
    return 0;
}