#include <string>
#include <vector>
#include <stdio.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        if (intervals.size() == 0)
        {
            return intervals;
        }
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> result;
        result.push_back(intervals[0]);
        for (int i = 1; i < intervals.size(); i++)
        {

            int end = result[result.size() - 1][1];
            int newBase = intervals[i][0];
            int newEnd = intervals[i][1];
            if (end < newBase)
            {
                result.push_back(intervals[i]);
            }
            else
            {
                result[result.size() - 1][1] = max(newEnd, end);
            }
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
    vector<vector<int>> result = s.merge(inputs);
    for (auto x : result)
    {
        cout << "[" << x[0] << "," << x[1] << "]" << endl;
    }
}