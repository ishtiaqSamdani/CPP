#include<bits/stdc++.h>

using namespace std;
int main()
{
    int a=7;
    int cnt=__builtin_popcount(a);//prints number of set bits in a(number of ones)
    cout<<cnt;//3

    long long int b=11111111111111111;
    long long c=__builtin_popcount(b);
    cout<<c;

    return 0;
}