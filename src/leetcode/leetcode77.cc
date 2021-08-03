#include <string>
#include <vector>
#include <iostream>
#include <unordered_set>
using namespace std;
class Solution
{
private:
    vector<vector<int>> result;

public:
    vector<vector<int>> combine(int n, int k)
    {
        vector<int> item;
        dfs(item, 1, n, k);
        return result;
    }

    void dfs(vector<int> item, int begin, int n, int k)
    {
        if (k == item.size())
        {
            result.push_back(item);
            return;
        }
        for (int i = begin; i <= n; i++)
        {
            item.push_back(i);
            dfs(item, i + 1, n, k);
            item.pop_back();
        }
    }
    void print(vector<int> nums)
    {
        for (auto x : nums)
        {
            cout << x << ",";
        }
        cout << endl;
    }
};
int main()
{
    Solution s;
    vector<vector<int>> result = s.combine(4, 2);
    cout << "--->" << endl;
    for (auto v : result)
    {
        cout << "[" << v[0] << "," << v[1] << "]" << endl;
    }
}