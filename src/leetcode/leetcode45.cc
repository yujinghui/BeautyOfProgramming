#include <string>
#include <vector>
#include <iostream>
using namespace std;
class Solution
{
public:
    int jump(vector<int> &nums)
    {
        int size = nums.size();
        int result[size];
        result[0] = 0;
        for (int i = 1; i < size; i++)
        {
            int step = 10001;
            for (int j = 0; j < i; j++)
            {
                if (nums[j] + j >= i)
                {
                    step = min(step, result[j] + 1);
                }
            }
            result[i] = step;
        }
        return result[size - 1];
    }
};

int main()
{
    Solution s;
    vector<int> nums({2, 3, 1, 1, 4});
    cout << s.jump(nums);
}