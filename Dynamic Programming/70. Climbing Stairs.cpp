// https://leetcode.com/problems/climbing-stairs/

class Solution {
public:
    vector<int> dp=vector<int>(46,-1);
    int climbStairs(int n) {
       if(n==0 || n==1 || n==2){
           return n;
       }
        int a,b;
        if(dp[n-1]==-1){
            a=climbStairs(n-1);
            dp[n-1]=a;
        }
        else{
            a=dp[n-1];
        }
        
        if(dp[n-2]==-1){
            b=climbStairs(n-2);
            dp[n-2]=b;
        }
        else{
            b=dp[n-2];
        }
        return a+b;
    }
};