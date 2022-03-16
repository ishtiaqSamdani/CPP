// https://leetcode.com/problems/fibonacci-number/

// *********my recursion only Solution************

// class Solution {
// public:
//     vector<int> ve;
//     int fib(int n) {
//         if(n==0 || n==1){
//             return n;
//         }
//         return fib(n-1)+fib(n-2);
//     }
// };

class Solution
{
public:
    vector<int> dp = vector<int>(30, -1); // initializing dp with size 30 and each element will be -1

    int fib(int n)
    {
        if (n == 0 || n == 1)
        {
            return n;
        }
        int a;
        int b;

        if (dp[n - 1] != -1)
        {
            a = dp[n - 1];
        }
        else
        {
            a = fib(n - 1);
            dp[n - 1] = a;
        }

        if (dp[n - 2] != -1)
        {
            b = dp[n - 2];
        }
        else
        {
            b = fib(n - 2);
            dp[n - 2] = b;
        }
        return a + b;
    }
};

// #include <bits/stdc++.h>

// using namespace std;
// vector<int> dp = vector<int>(10000001, -1);

// ........................updated version of fibnocci with dp🎸...................
int rec(int n)
{
    if (n <= 1)
    {
        return n;
    }
    if (dp[n] != -1)
    {

        return dp[n];
    }
    return dp[n] = rec(n - 1) + rec(n - 2);
}
// int main()
// {
//     int n;
//     cin >> n;
//     cout << rec(3);
// }