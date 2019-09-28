#include <iostream>
#include <vector>
using namespace std;

int climbStairs(int n)
{

    vector<int> dp(n, 0); //create vector of size n with 0's

    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;

    dp[0] = 1, dp[1] = 2;

    for (int i = 2; i < n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n - 1];
}
int main()
{
    cout << climbStairs(3);
}