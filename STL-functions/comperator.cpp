#include <bits/stdc++.h>
using namespace std;
void printV(vector<int> a)
{
    for (int &i : a)
    {
        cout << i << " ";
    }
    cout << "\n";
}

void printVP(vector<pair<int,int>> a){
    for(pair<int,int> &i:a){
        cout<<"{"<<i.first<<","<<i.second<<"}"<<" ";
    }
    cout<<"\n";
}
bool comp(int a, int b)
{
    if (a > b)
        return 1;
    return 0;
}

bool comp2(pair<int,int> p1,pair<int,int> p2){
    if(p1.second < p2.second) return 1;
    if(p1.second==p2.second){
        if(p1.first>p2.first) return 1;
        else return 0;
    }
    return 0;
}
int main()
{
    vector<int> a = {3, 4, 5, 1, 2, 7, 10};
    sort(a.begin(), a.end());
    printV(a); // 1 2 3 4 5 7 10
    sort(a.begin(), a.end(), comp);//can use greater<int> insteadnof comp
    printV(a); // 10 7 5 4 3 2 1


    vector<pair<int,int>> ap={{1,2},{0,6},{3,4},{5,7},{8,9},{5,9}};
    //sorting according to pair.second and if equal according to pair.first
    sort(ap.begin(),ap.end(),comp2);
    printVP(ap);
    return 0;
}