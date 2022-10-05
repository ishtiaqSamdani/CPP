#include<bits/stdc++.h>
using namespace std;
void printV(vector<int> a)
{
    for (int &i : a)
    {
        cout << i << " ";
    }
    cout << "\n";
}
int main()
{
    vector<int> v={1,2,3};
    do{
        printV(v);
    }while(next_permutation(v.begin(),v.end()));//O(n*n!)
    
    return 0;
}