#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        for (int i = 0; i < n; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                if (nums[i] + nums[j] == target)
                {
                    return vector<int>({i, j});
                }
            }
        }
        return vector<int>(0);
    }
};

int main()
{
    Solution s;
    vector<int> nums({2, 7, 11, 15});
    vector<int> result = s.twoSum(nums, 9);
    stringstream ss;
    string str;
    copy(result.begin(), result.end(), ostream_iterator<int>(ss, ""));
    str = ss.str();
    cout << str << endl;
}