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

public:
    vector<vector<int>> permute(vector<int> &nums)
    {

        for (int i = 0; i < nums.size(); i++)
        {
            unordered_set<int> item;
            backtrace(item, i, nums);
        }
        return ans;
    }

    void backtrace(unordered_set<int> &item, int idx, vector<int> &nums)
    {

        if (!item.count(nums[idx]))
        {
            item.insert(nums[idx]);
            for (int i = 0; i < nums.size(); i++)
            {
                if (i != idx)
                    backtrace(item, i, nums);
            }
            item.erase(nums[idx]);
        }
        else if (item.size() == nums.size())
        {
            vector<int> newItem = vector<int>(item.begin(), item.end());
            this->ans.push_back(newItem);
        }
    }
};

int main()
{
    Solution s;
    vector<int> nums({12, 13, 14});
    cout << "-->" << endl;
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