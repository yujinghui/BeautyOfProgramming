#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int max_result[nums.size()];
        int min_result[nums.size()];
        max_result[0] = nums[0];
        min_result[0] = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            min_result[i] = min(nums[i] * min_result[i - 1], min(nums[i], nums[i] * max_result[i - 1]));
            max_result[i] = max(nums[i] * min_result[i - 1], max(nums[i], nums[i] * max_result[i - 1]));
        }
        int max_val = -1000000;
        for (auto x : max_result)
        {
            max_val = max(x, max_val);
        }
        return max_val;
    }
};

int main()
{
    Solution s;
    vector<int> nums({-2});
    cout << s.maxProduct(nums);
}