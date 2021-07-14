#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {
        int size = nums.size();
        vector<int> ans;
        for (int i = 0; i < size * 2; i++)
        {
            ans.push_back(nums[i % size]);
        }
        return ans;
    }
};