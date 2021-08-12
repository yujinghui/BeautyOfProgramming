
#include <string>
#include <vector>
#include <iostream>
using namespace std;
class Solution
{
public:
    int mySqrt(int x) {
        double l = 0,
               r = x,
               ans = 0;
        while (l <= r)
        {
            ans = (l + r) / 2;
            if ((long long)(ans * ans) == x)
            {
                return (long long)ans;
            }
            else if (ans * ans > x)
            {
                r = ans;
            }
            else
            {
                l = ans;
            }
        }
        return ans;
    }
};

int main()
{
    Solution s;
    cout << s.mySqrt(8) << endl;
}