#include <string>
#include <vector>
#include <iostream>
using namespace std;
class Solution
{
public:
    int fib(int n)
    {
        if (n == 0)
        {
            return 0;
        }
        if (n == 1)
        {
            return 1;
        }
        int result[n + 1];
        result[0] = 0;
        result[1] = 1;
        for (int i = 2; i < n + 1; i++)
        {
            result[i] = result[i - 1] + result[i - 2];
        }
        return result[n];
    }
};

int main()
{
    Solution s;
    cout << s.fib(5);
}