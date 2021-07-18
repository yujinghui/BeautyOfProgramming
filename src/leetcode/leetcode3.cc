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
        int maxSubSize = 0;
        int ridx = 0;
        unordered_set<char> charset;
        for (int i = 0; i < s.size(); i++)
        {
            while (charset.count(s[ridx]) == 0 && ridx < s.size())
            {
                charset.insert(s[ridx]);
                ridx++;
            }
            maxSubSize = max(maxSubSize, ridx - i);
            charset.erase(s[i]);
        }
        return maxSubSize;
    }
};

int main()
{
    Solution s;
    string demo = "bbbbb";
    cout << s.lengthOfLongestSubstring(demo);
}