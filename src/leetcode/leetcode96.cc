#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    int numTrees(int n)
    {
        int result[n];
        result[0] = 1;
        result[1] = 1;
        for (int i = 2; i < n; i++)
        {
            result[i] = result[i -1] 
        }
        int maxVal = 0;
        for (auto x : result)
        {
            maxVal = max(x, maxVal);
        }
        return maxVal;
    }
};

int main()
{
    Solution s;
    cout << s.numTrees(3);
}