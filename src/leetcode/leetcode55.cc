#include <string>
#include <vector>
#include <iostream>
using namespace std;
class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        int n = nums.size();
        int rightmost = 0;
        for (int i = 0; i < n; ++i)
        {
            if (i <= rightmost)
            {
                rightmost = max(rightmost, i + nums[i]);
                if (rightmost >= n - 1)
                {
                    return true;
                }
            }
        }
        return false;
    }
};
int main()
{
    Solution s;
    vector nums({2, 3, 1, 1, 4});
    cout << s.canJump(nums);
}