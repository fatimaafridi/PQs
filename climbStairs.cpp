#include <iostream>
#include <vector>
using namespace std;

int computeStairs(int n, vector<int> &memo)
{
    if (memo[n] != 0)
        return memo[n];
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    else
    {
        memo[n] = computeStairs(n - 1, memo) + computeStairs(n - 2, memo);
    }
    return memo[n];
}

int climbStairs(int n)
{
    vector<int> memo(n + 1, 0);
    return computeStairs(n, memo);
}
int main()
{
    cout << climbStairs(3);
}