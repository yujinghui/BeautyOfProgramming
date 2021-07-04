#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;
class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        unordered_set<int> num_set;
        for (auto i : nums)
        {
            num_set.insert(i);
        }
        int longestResult = 0;
        for (auto i : num_set)
        {
            if (!num_set.count(i - 1))
            {
                int streak = 1;
                int num = i;
                while (num_set.count(num + 1))
                {
                    num = num + 1;
                    streak = streak + 1;
                }
                longestResult = max(longestResult, streak);
            }
        }
        return longestResult;
    }
};

int main()
{
    Solution *s = new Solution();
    vector<int> intputint({7, 1, 5, 3, 6, 4});
    cout << s->longestConsecutive(intputint) << endl;
}