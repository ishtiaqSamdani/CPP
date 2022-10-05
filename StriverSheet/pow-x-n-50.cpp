#include<bits/stdc++.h>
using namespace std;
double myPow(double x, int n) {
    long long num=n;
    if(num<0){
        num*=-1;
    }
    double ans=1;
    while(num!=0){
        if(num%2==0){
            x*=x;
            num/=2;
        }else{
            ans*=x;
            num-=1;
        }
    }
    if(n<0){
        ans=1/ans;
    }
    return ans;
}
int main()
{
    return 0;
}