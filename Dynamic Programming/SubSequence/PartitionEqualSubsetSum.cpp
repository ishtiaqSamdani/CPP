// https://www.codingninjas.com/codestudio/problems/partition-equal-subset-sum_892980?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos

// hint: divide into means sum will be half
#include <bits/stdc++.h>
using namespace std;
bool rec(int ind, int target, vector<int> arr)
{

    if (target == 0)
    {
        return true;
    }
    if (ind == 0)
    {
        return arr[0] == target;
    }

    int npk = rec(ind - 1, target, arr);
    int pk;
    if (arr[ind] <= target)
    {
        pk = rec(ind - 1, target - arr[ind], arr);
    }
    else
    {
        pk = false;
    }
    return npk || pk;
}
int main()
{

    vector<int> arr = {2, 3, 3, 3, 4, 5};
    int sumArr = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sumArr += arr[i];
    }

    if ((sumArr / 2) % 2 != 0)
    {
        cout << false;
    }
    else
    {
        cout << rec(arr.size() - 1, sumArr / 2, arr);
    }
    return 0;
}