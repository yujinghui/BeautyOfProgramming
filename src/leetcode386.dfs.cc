#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    vector<int> lexicalOrder(int n)
    {
        vector<int> result;
        for (int i = 1; i <= 9; i++)
        {
            if (i <= n)
            {
                dfs(i, n, result);
            }
        }
        return result;
    }

    void dfs(int i, int limiter, vector<int> &result)
    {
        result.push_back(i);
        int start = i * 10;
        for (int j = start; j < (i + 1) * 10; j++)
        {
            if (j > limiter)
            {
                return;
            }
            dfs(j, limiter, result);
        }
    }
};

int main()
{
    Solution *s = new Solution();
    vector<int> result = s->lexicalOrder(1);
    cout << result.size() << endl;
    for (auto x : result)
    {
        cout << x;
    }
}