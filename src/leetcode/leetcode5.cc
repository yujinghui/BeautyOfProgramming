#include <stdio.h>
#include <math.h>
#include <string>
#include <iostream>
#include <unordered_set>

using namespace std;
class Solution
{
public:
    // 遍历查找最长回文串。
    string longestPalindrome(string s)
    {
        int i = 0, j = 0, size = s.size(), maxVal = 0, start;
        for (int piv = 0; piv < size; piv++)
        {
            i = piv - 1;
            j = piv + 1;
            while (true)
            {
                if (i > 0 && j < size && s[i] == s[j])
                {
                    i--;
                    j++;
                    continue;
                }
                else
                {
                    if (j - 1 - i > maxVal)
                    {
                        maxVal = j - 1 - i;
                        start = i + 1;
                    }
                    break;
                }
            }
        }
        return s.substr(start, maxVal);
    }

    // dp
    string longestPalindrome1(string s)
    {
        return "";
    }
};

int main()
{
    Solution s;
    cout << s.longestPalindrome("cbbd");
}