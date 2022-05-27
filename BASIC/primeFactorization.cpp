#include <bits/stdc++.h>
using namespace std;
vector<int> fa;
vector<int> expi;

void primeFactor(int n){
    int divisor=2;
    while(n>1 && (divisor*divisor<=n)){
        int dCount=0;
        while(n%divisor==0){
            dCount++;
            n/=divisor;
        }
            if(dCount!=0){
                fa.push_back(divisor);
                expi.push_back(dCount);
            }
        divisor++;

    }
    if(n>1){
        fa.push_back(n);
        expi.push_back(1);
    }
}
int main()
{
    int n;
    cin >> n;
    primeFactor(n);
    for(int i=0;i<fa.size();i++){
        cout<<"("<<fa[i]<<"^"<<expi[i]<<")";
        if(i<fa.size()-1){
            cout<<"*";
        }
    }
    return 0;
}
