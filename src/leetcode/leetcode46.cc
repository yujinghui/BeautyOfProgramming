#include <string>
#include <stdio.h>
#include <vector>
#include <iostream>
#include <unordered_set>
using namespace std;
/**
 * 给定一个不含重复数字的数组 nums ，返回其 所有可能的全排列 。你可以 按任意顺序 返回答案。
 */
class Solution
{
    vector<vector<int>> ans;
    vector<bool> checked;

public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        checked.resize(nums.size(), false);
        vector<int> item;
        int nsize = nums.size();
        backtrace(item, nums, nsize);
        return ans;
    }

    void backtrace(vector<int> item, vector<int> &nums, int nsize)
    {

        if (item.size() == nsize)
        {
            ans.push_back(item);
            return;
        }
        for (int i = 0; i < nsize; i++)
        {
            if (!checked[i])
            {
                checked[i] = true;
                item.push_back(nums[i]);
                backtrace(item, nums, nsize);
                item.pop_back();
                checked[i] = false;
            }
        }
    }
};

int main()
{
    Solution s;
    vector<int> nums({1, 2, 3});
    cout << "---->" << endl;
    vector<vector<int>> result = s.permute(nums);
    for (auto x : result)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << "\n";
    }
}