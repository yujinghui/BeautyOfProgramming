#include <stdio.h>
#include <math.h>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Solution
{
public:
    vector<int> countBits(int n)
    {
        vector<int> result(n + 1);
        result[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            int n = i;
            int c = 0;
            while (n != 0)
            {
                c = c + (n % 2 == 1 ? 1 : 0);
                n = n >> 1;
                cout << n;
            }
            result[i] = c;
        }
        return result;
    }
};

int main()
{
    Solution s;
    vector<int> rst = s.countBits(8);
    for (auto x : rst)
    {
        cout << x << endl;
    }
}