#include <string>
#include <math.h>
#include <vector>
#include <iostream>
using namespace std;
class Solution
{
public:
    double myPow(double x, long n)
    {
        return n >= 0 ? myPow1(x, n) : (1 / myPow1(x, -n));
    }
    double myPow1(double x, long n)
    {
        double ans = 1;
        double origin = x;
        while (n > 0)
        {
            if (n % 2 == 1)
            {
                ans *= origin;
            }
            origin *= origin;
            n = n / 2;
        }
        return ans;
    }
};
int main()
{
    Solution s;
    cout << s.myPow(1.00000, -2147483648) << endl;
    cout << pow(1.00000, -2147483648);
}