#include<bits/stdc++.h>
using namespace std;
int of(char ch){
    if(ch=='{' || ch=='}'){
        return 0;
    }else if(ch=='(' || ch==')'){
        return 1;
    }
    else{
        return 2;
    }
}
bool isVaild(string str){
    stack<int> st;
    for(int i=0;i<str.size();i++){
        if(str[i]=='(' || str[i] =='{' || str[i]=='['){
            st.push(str[i]);
        }
        else{
            if(!st.empty()){
                if(of(st.top())==of(str[i])){
                    st.pop();
                }
            }
        }
    }
    return st.empty();
}
int main()
{
    string str="[{}{(})]";
    cout<<isVaild(str);
    return 0;
}