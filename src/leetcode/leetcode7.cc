#include <stdio.h>
#include <math.h>
#include <string>
#include <vector>
#include <iostream>

using namespace std;
class Solution
{
public:
    int reverse(int x)
    {
        int ans = 0;
        while (x != 0)
        {
            if (ans > INT_MAX / 10 || ans < INT_MIN / 10)
            {
                return 0;
            }
            ans = ans * 10;
            int t = x % 10;
            ans += t;
            x = x / 10;
        }
        return ans;
    }
};
int main()
{
    Solution s;
    cout << s.reverse(-214);
}