#include <string>
#include <vector>
#include <iostream>
#include <stack>
using namespace std;

class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        if (nums.size() == 0)
        {
            return nums;
        }
        vector<int> result(nums.size());
        result[0] = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            result[i] = result[i - 1] + nums[i];
        }
        return result;
    }
};

int main()
{
}