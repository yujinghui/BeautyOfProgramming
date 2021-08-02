#include <string>
#include <vector>
#include <stdio.h>
#include <iostream>
using namespace std;

/**
 * 扩大边界，直到遇到不交叉的interval.
 */
class Solution
{
public:
    vector<vector<int>> insert(vector<vector<int>> &intervals, vector<int> &newInterval)
    {
        int size = intervals.size();
        if (size == 0)
        {
            intervals.push_back(newInterval);
            return intervals;
        }
        vector<vector<int>> result;
        int left = newInterval[0];
        int right = newInterval[1];
        bool inserted = false;
        for (auto interval : intervals)
        {
            if (interval[1] < left)
            {
                result.push_back(interval);
            }
            else if (interval[0] > right)
            {
                if (!inserted)
                {
                    result.push_back({left, right});
                    inserted = true;
                }
                result.push_back(interval);
            }
            else
            {
                left = min(left, interval[0]);
                right = max(right, interval[1]);
            }
        }
        if (!inserted)
        {
            result.push_back({left, right});
        }
        return result;
    }
};
int main()
{
    Solution s;
    vector<vector<int>> inputs;
    inputs.push_back(vector<int>({1, 3}));
    inputs.push_back(vector<int>({2, 6}));
    inputs.push_back(vector<int>({8, 10}));
    vector<int> newInputs({7, 9});
    vector<vector<int>> result = s.insert(inputs, newInputs);
    for (auto x : result)
    {
        cout << "[" << x[0] << "," << x[1] << "]" << endl;
    }
}