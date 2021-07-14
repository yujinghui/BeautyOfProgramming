#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int n = nums.size();
        if (n == 0)
        {
            return -1;
        }
        if (n == 1)
        {
            return nums[0] == target ? target : -1;
        }
        int l = 0, r = n - 1;
        while (l <= r)
        {
            int pivital_idx = (l + r) / 2;
            if (nums[0] < nums[pivital_idx])
            {
                if (nums[0] <= target && target < nums[pivital_idx])
                {
                    r = pivital_idx - 1;
                }
                else
                {
                    l = pivital_idx + 1;
                }
            }
            else
            {
                if (nums[pivital_idx] <= target && target < nums[n - 1])
                {
                    l = pivital_idx + 1;
                }
                else
                {
                    r = pivital_idx - 1;
                }
            }
        }
    }
};

int main()
{
}