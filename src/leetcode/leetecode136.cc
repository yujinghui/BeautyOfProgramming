#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>

using namespace std;
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int result = 0;
        for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++)
        {
            result ^= *it;
        }
        return result;
    }
};

int main()
{
    Solution *s = new Solution();
    vector<int> intputint({2, 3, 3, 2, 5});
    cout << s->singleNumber(intputint) << endl;
}