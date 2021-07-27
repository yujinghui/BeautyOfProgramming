#include <string>
#include <stdio.h>
#include <vector>
#include <iostream>
#include <stack>
using namespace std;

class Solution
{
public:
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> item;
        dfs(target, candidates, 0, ans, item);
        return ans;
    }

    void dfs(int target, vector<int> &candidates, int s, vector<vector<int>> &result, vector<int> &item)
    {
        if (s == candidates.size())
        {
            return;
        }
        if (target == 0)
        {
            result.emplace_back(item);
            return;
        }
        else if (target > 0)
        {
            int t = target - candidates[s];
            item.push_back(candidates[s]);
            dfs(t, candidates, s + 1, result, item);
            item.pop_back();
        }
        else
        {
            dfs(target, candidates, s + 1, result, item);
        }
    }
};

int main()
{
    Solution s;
    vector<int> nums({10, 1, 2, 7, 6, 1, 5});
    vector<vector<int>> result = s.combinationSum(nums, 8);
    cout << "-->" << result.size() << endl;
    for (auto x : result)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << "\n";
    }
}