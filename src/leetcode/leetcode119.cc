#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> getRow(int rowIndex)
    {
        vector<int> pre, cur;
        for (int i = 0; i <= rowIndex; ++i)
        {
            cur.resize(i + 1);
            cur[0] = cur[i] = 1;
            for (int j = 1; j < i; ++j)
            {
                cur[j] = pre[j - 1] + pre[j];
            }
            pre = cur;
        }
        return pre;
    }
};
int main()
{
    Solution *s;
    vector<int> a = s->getRow(2);
    for (auto x : a)
    {
        cout << x << ",";
    }
}