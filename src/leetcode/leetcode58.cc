#include <string>
#include <vector>
#include <stdio.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int count = 0;
        bool start = false;
        if (s.size() == 0)
            return count;
        if (s.size() == 1 && s[0] != ' ')
            return 1;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == ' ' && start)
            {
                break;
            }
            else if (s[i] == ' ' && !start)
            {
                continue;
            }
            else if (start)
            {
                count++;
            }
            else
            {
                start = true;
                count++;
            }
        }
        return count;
    }
};

int main()
{
    Solution s;
    cout << s.lengthOfLastWord("Haa world    ");
}