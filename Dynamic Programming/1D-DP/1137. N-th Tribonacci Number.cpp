// https://leetcode.com/problems/n-th-tribonacci-number/

class Solution
{
public:
    vector<int> dp = vector<int>(38, -1);

    int tribonacci(int n)
    {
        if (n <= 1)
            return n;
        if (n == 2)
            return 1;
        if (dp[n] != -1)
            return dp[n];
        return dp[n] = tribonacci(n - 2) + tribonacci(n - 1) + tribonacci(n - 3);
    }
};

// class Solution {
// public:
//     vector<int> dp=vector<int>(38,-1);
//     int tribonacci(int n) {
//         if(n==0 || n==1){
//             return n;
//         }
//         if(n==2){
//             return 1;
//         }

//         int a,b,c;

//         if(dp[n-1]==-1){
//             a=tribonacci(n-1);
//             dp[n-1]=a;
//         }
//         else{
//             a=dp[n-1];
//         }

//         if(dp[n-2]==-1){
//             b=tribonacci(n-2);
//             dp[n-2]=b;
//         }
//         else{
//             b=dp[n-2];
//         }

//         if(dp[n-3]==-1){
//             c=tribonacci(n-3);
//             dp[n-3]=c;
//         }
//         else{
//             c=dp[n-3];
//         }
//         return a+b+c;
//     }
// };
