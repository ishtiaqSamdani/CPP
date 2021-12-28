#include<bits/stdc++.h>

using namespace std;
const int N=1e7+10;
vector<int> Sieve(N,1);

void CreateSieve(){
    Sieve[0]=0;
    Sieve[1]=0;
    for(int i=2;i<N;++i){
        if(Sieve[i]==1){
            for(int j=i*2;j<N;j+=i){
                Sieve[j]=0;
            }
        }
        
    }
}

int main(){
    CreateSieve();
    for(int i=1;i<=50;i++){
        cout<<Sieve[i]<<" ";
        if(i%10==0){
            cout<<"\n";
        }
    }
}