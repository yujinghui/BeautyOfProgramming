#include <string>
#include <vector>
#include <iostream>
using namespace std;
class Solution
{
    vector<string> ans;
    int n;

public:
    vector<string> generateParenthesis(int n)
    {
        this->n = n;
        backtrace("", 0, 0);
        return ans;
    }

    void backtrace(string s, int l, int r)
    {
        if (s.size() == this->n * 2 && l == r)
        {
            ans.push_back(s);
            return;
        }
        if (l < n)
        {
            s.push_back('(');
            backtrace(s, l + 1, r);
            s.pop_back();
        }
        if (l > r)
        {
            s.push_back(')');
            backtrace(s, l, r + 1);
            s.pop_back();
        }
    }
};

int main()
{
    Solution s;
    vector<string> result = s.generateParenthesis(3);
    for (auto x : result)
    {
        cout << x << endl;
    }
}