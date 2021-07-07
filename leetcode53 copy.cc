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
        for (int i = 0; i < nums.size(); i++)
        {
            if (i == 0)
            {
                result[i] = nums[i];
            }
            else
            {
                result[i] = max(nums[i], nums[i] + result[i - 1]);
            }
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