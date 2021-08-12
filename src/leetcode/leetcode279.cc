#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    int numSquares(int n)
    {
        int dp[n + 1];
        for (int i = 0; i <= n; i++)
        {
            int minval = INT_MAX;
            for (int j = 1; j * j <= i; j++)
            {
                minval = min(minval, dp[i - j * j]);
            }
            dp[i] = minval + 1;
        }
        return dp[n];
    }
};