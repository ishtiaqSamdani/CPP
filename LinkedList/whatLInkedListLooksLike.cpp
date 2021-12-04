#include<bits/stdc++.h>
using namespace std;

class LL{// or struct LL without public
    public:
    int val;
    LL* next;

    LL(int inp){
        val=inp;
        next=NULL;
    }
};
int main(){
    LL* head=new LL(68);
}