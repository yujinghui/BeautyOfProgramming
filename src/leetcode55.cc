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

        bool dp[n];
        dp[0] = true;

        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (dp[j] && j + nums[j] >= i)
                {
                    dp[i] = true;
                    break;
                }
            }
        }

        return dp[n - 1];
    }
};
int main()
{
    Solution s;
    vector nums({2, 3, 1, 1, 4});
    cout << s.canJump(nums);
}