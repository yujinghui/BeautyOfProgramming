
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;
class Solution
{
public:
    string addBinary(string a, string b)
    {
        string ans;
        int i = a.size() - 1, j = b.size() - 1;
        int carry = 0;
        while (i >= 0 || j >= 0)
        {
            int v = 0;
            if (i >= 0)
            {
                v = a[i--] - '0';
            }
            int u = 0;
            if (j >= 0)
            {
                u = b[j--] - '0';
            }
            int result = v + u + carry;
            carry = result / 2;
            ans += to_string(result % 2);
        }
        if (carry == 1)
            ans += to_string(carry);
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main()
{
    Solution s;
    cout << s.addBinary("0", "0");
}