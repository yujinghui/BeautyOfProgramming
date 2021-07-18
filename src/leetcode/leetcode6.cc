#include <stdio.h>
#include <math.h>
#include <string>
#include <vector>
#include <iostream>

using namespace std;
class Solution
{
public:
    string convert(string s, int numRows)
    {
        if (numRows == 1)
        {
            return s;
        }
        int size = min(numRows, (int)s.size());
        vector<string> rows(size);
        int cur = 0;
        bool goDown = false;
        for (char x : s)
        {
            rows[cur] += x;
            if (cur == 0 || cur == size - 1)
            {
                goDown = !goDown;
            }
            cur += goDown ? 1 : -1;
        }
        string ans;
        for (string x : rows)
            ans += x;
        return ans;
    }
};

int main()
{
    Solution s;
    cout << s.convert("PAYPALISHIRING", 3);
}