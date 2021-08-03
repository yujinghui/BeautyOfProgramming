#include <string>
#include <unordered_map>
#include <vector>
#include <iostream>
using namespace std;
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> counts;
        int majority = 0, cnt = 0;
        for (int x : nums)
        {
            counts[x]++;
            if (counts[x] > cnt)
            {
                cnt = counts[x];
                majority = x;
            }
        }
        return majority;
    }
};

int main()
{
    Solution *s;
    vector<int> nums({2, 2, 1, 1, 1, 2, 2});
    cout << s->majorityElement(nums);
}