#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int pivtal = 0;
        for (int ptr = 0; ptr < nums.size(); ptr++)
        {
            if (nums[ptr] != 0)
            {
                nums[pivtal] = nums[ptr];
                pivtal++;
            }
        }
        for (int i = pivtal; i < nums.size(); i++)
        {
            nums[i] = 0;
        }
    }
};

int main()
{
    Solution s;
    vector<int> nums({0,1,0,3,12});
    s.moveZeroes(nums);
    for (auto x : nums)
    {
        cout << x << ",";
    }
    cout << endl;
}