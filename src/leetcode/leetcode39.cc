#include <string>
#include <vector>
#include <iostream>
#include <stack>
using namespace std;

class Solution
{
public:
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> result;
        dfs(candidates, 0, candidates.size(), target, result);
        return result;
    }

    void dfs(vector<int> &candidates, int start, int len, int target,
             vector<int> path, vector<vector<int>> result)
    {
    }
};

int main() {}