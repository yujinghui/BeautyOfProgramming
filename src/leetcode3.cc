#include <stdio.h>
#include <math.h>
#include <string>
#include <iostream>
#include <unordered_set>

using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string &s)
    {
        int maxSubSize = 0, beginIdx = 0;
        unordered_set<char> charset;
        for (int i = 0; i < s.size(); i++)
        {
            if (charset.count(s[i]) > 0)
            {
                beginIdx++;
                charset.erase();
            }
            maxSubSize = max(i - beginIdx + 1, maxSubSize);
        }
        return maxSubSize;
    }
};

int main()
{
    Solution s;
    string demo = "abcabcbb";
    cout << s.lengthOfLongestSubstring(demo);
}