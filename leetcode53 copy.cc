#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int result[nums.size()];
        result[0] = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            result[i] = max(nums[i], nums[i] + result[i - 1]);
        }
        int maxVal = -1000000;
        for (auto x : result)
        {
            maxVal = max(maxVal, x);
        }
        return maxVal;
    }
};
int main()
{
    vector<int> inputnums({-2, 1, -3, 4, -1, 2, 1, -5, 4});
    Solution *s = new Solution();
    cout << s->maxSubArray(inputnums);
}