#include <string>
#include <vector>
#include <iostream>
using namespace std;
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int size = nums.size();
        if (nums[size - 1] == target)
        {
            return size - 1;
        }
        if (nums[size - 1] < target)
        {
            return size;
        }
        for (int i = 0; i < size - 1; i++)
        {
            if (nums[i] == target)
            {
                return i;
            }
            if (nums[i] < target && target < nums[i + 1])
            {
                return i + 1;
            }
        }
        return 0;
    }
};

int main()
{
}