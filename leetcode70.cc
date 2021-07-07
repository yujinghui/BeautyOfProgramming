#include <string>
#include <vector>
#include <iostream>
using namespace std;
/**
 * 动态规划解决爬梯子。 
 */
class Solution
{
public:
    int climbStairs(int n)
    {
        if (n == 1)
            return 1;
        int maxVal = 0;
        int result[n];
        result[0] = 1;
        result[1] = 2;
        for (int i = 2; i < n; i++)
        {
            result[i] = result[i - 1] + result[i - 2];
        }
        for (auto x : result)
        {
            maxVal = max(maxVal, x);
        }
        return maxVal;
    }
};

int main()
{
}