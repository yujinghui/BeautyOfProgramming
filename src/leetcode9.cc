#include <stdio.h>
#include <math.h>
#include <string>
#include <iostream>
#include <unordered_set>

using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        int newVal = 0, oldVal = x;
        while (x > 0)
        {
            newVal = newVal * 10;
            int remain = x % 10;
            x = x / 10;
            newVal = remain + newVal;
        }
        cout << newVal << " ==" << oldVal << endl;
        return newVal == oldVal;
    }
};

int main()
{
    Solution s;
    cout << s.isPalindrome(91234567899);
}