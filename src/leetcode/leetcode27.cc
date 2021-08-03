#include <string>
#include <vector>
#include <iostream>
using namespace std;
class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int idx = 0;
        if (nums.size() == 0)
        {
            return idx;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (val != nums[i])
            {
                nums[idx++] = nums[i];
            }
        }
        return idx ;
    }
};

int main()
{
    Solution s;
    vector<int> nums({9, 8, 7, 6, 5, 9, 94, 9});
    int result = s.removeElement(nums, 9);
    cout << result;
}