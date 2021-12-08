// https://leetcode.com/problems/fibonacci-number/



class Solution {
public:
    vector<int> dp=vector<int>(30,-1);//initializing dp with size 30 and each element will be -1
    
    

    
    int fib(int n) {
        if(n==0 || n==1){
            return n;
        }
        int a;
        int b;
        
        if(dp[n-1]!=-1){
            a=dp[n-1];
        }
        else{
            a=fib(n-1);
            dp[n-1]=a;
        }
        
        if(dp[n-2]!=-1){
            b=dp[n-2];
        }
        else{
            b=fib(n-2); dp[n-2]=b;
        }
            return a+b;
    }
};