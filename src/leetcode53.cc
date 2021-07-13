#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int pre = 0;
        int maxVal = nums[0];
        for (auto& x : nums)
        {
            pre = max(x, pre + x);
            maxVal = max(pre, maxVal);
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